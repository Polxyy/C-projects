#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//�� �� ������ ����� �� ������������.��� ���� �� �� ���������
//������������ �� ������, ���� �� ����� ��� �� �������� �� ��� ����.
//������: ���� � ������� ������
//Pri razbota s fajlove se izpolzva klasat fstream
//��� ������ �� �������� �������� :
//Pri razbota s
//fajlove se izpolzva
//klasat fstream

int main(){
	fstream fp;
	string txt;
	int br = 0;
	size_t na, kr;
	cout << "enter text" << endl;
	getline(cin, txt);
	fp.open("C:\\Users\\ROG STRIX\\Desktop\\out.txt", ios::out);
	na = txt.find_first_not_of(" ");
	while (na != string::npos) {
		br++;
		kr = txt.find_first_of(" ", na);
		fp << txt.substr(na, kr - na);
		na = txt.find_first_not_of(" ", kr);
		if (br == 3) {
			fp << '\n';
			br = 0;
		}
		else {
			fp << " ";
		}
	}
	fp.close();
}