#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//�� ����������� ����������� ����� ��� �� FTP ������� �� ����� ���� ��� �������� ��������� :
//�����[TAB]�����������

int main() {
	fstream fp;
	string vreme;
	int temp;
	string maxvr;
	int max = 0;
	fp.open("C:\\Users\\ROG STRIX\\Desktop\\vreme.txt");
	if (!fp.is_open()) {
		cout << "File not found!" << endl;
		return -1;
	}
	while (!fp.eof()) {
		getline(fp, vreme, '\t');
		fp >> temp;
		if (temp > max) {
			max = temp;
			maxvr = vreme;
		}
	}
	cout << "The biggest temperature was: " << maxvr << '\t' << max;
}