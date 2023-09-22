#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Задача 1. дума.Да се напише програма, която създава втори файл,
//в който думите да се запишат сортирани във възходящ ред.
//(упътване: Да се използва vector.Имената на файловете са по ваш избор)

//int main() {
//	fstream fin;
//	fstream fout;
//	vector<string>  v;
//	string duma;
//	int pos = 0;
//	fin.open("C:\\Users\\ROG STRIX\\Desktop\\asd.txt",ios::in);
//	if (!fin.is_open()) {
//		cout << "File not found" << endl;
//		return -2;
//	}
//	while (!fin.eof()) {
//		getline(fin, duma);
//		v.push_back(duma);
//	}
//	for (int i = 0; i < v.size(); i++) {
//		for (int j = i; j < (v.size()); j++) {
//			if (v[i] > v[j]) {
//				swap(v[i], v[j]);
//			}
//		}
//	}
//	fout.open("C:\\Users\\ROG STRIX\\Desktop\\dsa.txt", ios::out);
//	for (int i = 0; i < v.size(); i++) {
//		fout << v[i] << endl;
//	}
//}


//Да се попълни вектор с цели числа от клавиатурата, до 
//въвеждане на стойност 0. Да се изведат на екрана всички
//повтарящите се стойности от вектора.
//Пример: нека векторът да съдържа : 1 2 2 3 3 4 4 4 4 5
//На екрана трябва да се изведе : 2 3 4 4 4

int main() {
	int num;
	vector<int> v;
	vector<int> v2;
	while (true) {
		cout << "Enter num: " << endl;
		cin >> num;
		v.push_back(num);
		if (num == 0)break;
	}
	for (int i = 0; i < v.size(); i++) {
		for (int j = i; j < (v.size()); j++) {
			if (v[i] > v[j]) {
				swap(v[i], v[j]);
			}
		}
	}


	for (int x = 0; x < v.size() - 1; x++) {
		if (v[x] == v[x + 1]) {
			v2.push_back(v[x]);
		}
	}
	for (int i = 0; i < v2.size(); i++) {
		cout << v2[i] << endl;
	}
	return 0;
}
