#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//Във фирма решили да изчислят общият брой импулси от разговорите по
//служебните телефони.Напишете програма, която прочита от файл, данните за
//всеки номер на телефон и съответният брой импулси.
//Да се изведат на екрана номерата и общият брой импулси за всеки номер.
//Задачата да се реши с използване на вектор - двойки(pair)

int main() {
	vector<pair<int, int>> tel;
	fstream fin;
	int p1, p2;
	fin.open("C:\\Users\\ROG STRIX\\Desktop\\asd.txt", ios::in);
	if (!fin.is_open()) {
		cout << "File not found!" << endl;
		return -1;
	}
	while (!fin.eof()) {
		fin >> p1;
		fin >> p2;
		tel.push_back(make_pair(p1, p2));
	}
	for (int i = 0; i < tel.size(); i++) {
		for (int x = i; x < tel.size(); x++) {
			if (tel[i].first > tel[x].first) {
				swap(tel[i], tel[x]);
			}
		}
	}
	for (int x = 0; x < tel.size() - 1; x++) {
		for(int k=x;k<tel.size()-1;k++)
		{
			if (tel[x].first == tel[x+1].first) {
				tel[x].second += tel[x+1].second;
				tel.erase(tel.begin() + x + 1);
			}
		}
	}
	for (int i = 0; i < tel.size(); i++) {
		cout << tel[i].first << '\t' << tel[i].second << endl;
	}
	fin.close();
}