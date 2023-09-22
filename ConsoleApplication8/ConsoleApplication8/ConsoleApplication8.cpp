

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//Задача 1. Да се напише програма, която от текст, въведен от
//клавиатурата, всяка дума да се замени с нейната дължина.
//Вход: Knyaz Boris 3, number 77, room 51
//Изход : 5 5 3, 6, 77, 4 51


int main()
{
	string text, duma;
	string end ="";
	string cifra;
	int bukva;
	string bukva1;
	string mask = ".,!? ";
	string mask2 = "0123456789";
	size_t nachalo, krai;
	cout << "Enter text: " << endl;
	getline(cin, text);
	nachalo = text.find_first_not_of(mask);
	while ((string::npos != nachalo)) {
		krai = text.find_first_of(mask, nachalo);
		duma = text.substr(nachalo, krai);
		if (duma.find(mask2)) {
			bukva1 = duma;
		}
		else {
			bukva1 = duma;
		}
		nachalo = text.find_first_not_of(mask, krai);
		bukva1 = to_string(bukva);
		end +=bukva1 + " ";
	}
	cout << end << endl;
}


