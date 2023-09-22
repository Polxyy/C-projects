#include <iostream>
#include <string>

using namespace std;

//Задача 1. Да се напише програма, която от текст, въведен от
//клавиатурата, всяка дума да се замени с нейната дължина.
//Вход: Knyaz Boris 3, number 77, room 51
//Изход : 5 5 3, 6, 77, 4 51


int main()
{
	string izr, duma;
	string mask = ".,!? ";
	string mask2 = "0123456789";
	size_t asd = -1;
	size_t bau;
	size_t nachalo, krai;
	cout << "Enter text: " << endl;
	getline(cin, izr);
	nachalo = izr.find_first_not_of(mask);
	while (string::npos != nachalo) {
		krai = izr.find_first_of(mask, nachalo);
		duma = izr.substr(nachalo, krai - nachalo);
	 	bau = duma.size();
		if (duma.find_first_of(mask2)) {
			cout << duma.size() << " ";
		}
		else if(duma.find_first_not_of(mask2)) {
			cout << duma << " ";
		}
		nachalo = izr.find_first_not_of(mask, krai);
	}

}
