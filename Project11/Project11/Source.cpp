#include <vector>
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//������ 1. ����.�� �� ������ ��������, ����� ������� ����� ����,
//� ����� ������ �� �� ������� ��������� ��� �������� ���.
//(��������: �� �� �������� vector.������� �� ��������� �� �� ��� �����)

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


//�� �� ������� ������ � ���� ����� �� ������������, �� 
//��������� �� �������� 0. �� �� ������� �� ������ ������
//����������� �� ��������� �� �������.
//������: ���� �������� �� ������� : 1 2 2 3 3 4 4 4 4 5
//�� ������ ������ �� �� ������ : 2 3 4 4 4

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
