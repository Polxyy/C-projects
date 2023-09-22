#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;


int main() {
	fstream fin,fout;
	string text;
	int p1;
	float p2;
	fin.open("C:\\Users\\ROG STRIX\\Desktop\\hw5.txt", ios::in);
	if (!fin.is_open()) {
		cout << "Error to open file\n";
		return -1;
	}

	vector < pair<string, pair<int, float>>> stoki;
	vector <pair<string, float>> kray;

	while (!fin.eof()) {
		getline(fin, text, '\t');
		fin >> p1;
		fin >> p2;
		stoki.push_back(make_pair(text, make_pair(p1, p2)));
	}

	for (int x = 1; x < stoki.size(); x++) {
		for (int j = x ; j < (stoki.size()); j++) {
			if (stoki[x].first > stoki[j].first) {
				swap(stoki[x], stoki[j]);
			}
		}
		
	}

	for (int x = 0; x < stoki.size(); x++) {
			kray.push_back(make_pair(stoki[x].first,stoki[x].second.first *stoki[x].second.second));

	}

	for (int x = 0; x < kray.size()-1; x++) {
		for (int k = x; k < kray.size() - 1; k++)
		{
			if (kray[x].first == kray[x+1].first) {
				kray[x].second += kray[x+1].second;
				kray.erase(kray.begin() + x + 1);
			}
		}
	}
	//if (kray[x].first == kray[x + 1].first) {
	//	kray[x + 1].first = kray[x].first;
	//	kray[x + 1].second += kray[x].second;
	//	kray.erase(kray.begin() + x);
	//}

	fout.open("C:\\Users\\ROG STRIX\\Desktop\\hw5solution.txt", ios::out);

	for (int x = 0; x < kray.size(); x++) {
		fout << kray[x].first << "\t" << kray[x].second << endl;
	}

	fin.close();
	fout.close();

	return 0;
}