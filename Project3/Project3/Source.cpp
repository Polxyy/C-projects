#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Да се въведе текст от клавиатурата.Във файл да се прехвърли
//съдържанието на текста, като на всеки ред се записват по три думи.
//Пример: нека е въведен текста
//Pri razbota s fajlove se izpolzva klasat fstream
//Във файлът се получава следното :
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