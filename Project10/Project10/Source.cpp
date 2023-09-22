#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main() {
	//pair<int, string> test;
	//test = make_pair(123, "Varna");
	//cout << test.first << "," << test.second << endl;

	// От файл съдържащ думи (на всеки ред по една дума) прехвърлете 
	// във вектор - двойка, който да съдържа всяка дума, колко пъти
	// се среща.
	//C:\\Users\\ROG STRIX\\Desktop

	fstream f;
	f.open("C:\\Users\\ROG STRIX\\Desktop\\words.txt", ios::in);
	if (!f.is_open()) {
		cout << "Error to open file\n"; return -1;
	}
	// дума, брой
	vector<pair<string, int>> dumi;
	while (!f.eof()) {
		string line;
		getline(f,line);
		cout << line << endl;
		//Търсим във вектора има ли я новата дума
		int x;
		for (x = 0; x < dumi.size(); x++) {
			if (line == dumi[x].first) {
				dumi[x].second++;
				break;
			}
		}
		if (x == dumi.size()) dumi.push_back(make_pair(line, 1));
	}
	// Извеждане
	cout << "Words:\n";
	//for (int x = 0; x < dumi.size(); x++) {
	//	cout << dumi[x].first << "\t\t" << dumi[x].second << endl;
	//}
	for (vector<pair<string, int>>::iterator it = dumi.begin(); it != dumi.end(); it++) {
		cout << it->first << "\t\t" << it->second << endl;
	}
	f.close();

	// Намерете броят на уникалните думи във файла.
	cout << dumi.size() << endl;
	//Във втори вектор прехвърлете думите, които се срещат 
	// повече от един път
	vector<string> dict;

	//moe ne raboti!

	//for (int i = 0; i < dumi.size(); i++) {
	//	if (dumi[i].second > 1) {
	//		dict.push_back(dumi[i].first);
	//		break;
	//	}
	//	cout << dict[i];
	//}

	// moe ne raboti ^

	for (vector<pair<string, int >>::iterator it = dumi.begin(); it != dumi.end(); it++) {
		if (it->second > 1) {
			dict.push_back(it->first);
		}
	}
	cout << "Second:\n";
	for (int i = 0; i < dict.size(); i++) {
		cout << dict[i] << endl;
	}

	//Ot vektor dumi prehvurlete elementite v nov vetor,
	//kato gi podredite v nizhodqsht red;
	vector <pair<string, int>> podr;
	for (int i = 0; i < dumi.size(); i++) {
		int index = 0;
		while (index < podr.size() && dumi[i].second>podr[index].second)
			index++;
		if (index == podr.size())
		//podr.push_back(make_pair(dumi[i].first,dumi[i].second));
		{
			podr.push_back(dumi[i]);
		}
		else {
			podr.insert(podr.begin() + index, dumi[i]);
		}
	}
	fstream f2;
	f2.open("C:\\Users\\ROG STRIX\\Desktop\\asd.txt", ios::out);
	for (int x = 0; x < podr.size(); x++) {
		f2 << podr[x].first << "\t" << podr[x].second << endl;
	}
	f2.close();
	// Запишете съдържанието на вектор podr, във текстови файл.
}
