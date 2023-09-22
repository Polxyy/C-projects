#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

//��� ����� ������ �� �������� ������ ���� ������� �� ����������� ��
//���������� ��������.�������� ��������, ����� ������� �� ����, ������� ��
//����� ����� �� ������� � ����������� ���� �������.
//�� �� ������� �� ������ �������� � ������ ���� ������� �� ����� �����.
//�������� �� �� ���� � ���������� �� ������ - ������(pair)

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