
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string str;
	//cin >> str;
	//getline(cin, str);
	//cout << str << endl;
	//string txt = "Hello Word, hello Varna";
	//cout << txt.find_first_of("nrl") << endl;
	//cout << txt.find_last_of("nrl", 5) << endl;
	//Изведете броят на гласните в текста
	//1 Вариант
	//size_t ind;
	//ind = txt.find_first_of("iaoeuy");
	//while (ind != string::npos)
	//{
	//	cout << ind << ",";
	//	ind = txt.find_first_of("iaoeuy", ind + 1);
	//}
	//size_t ind = -1;
	//while ((ind = txt.find_first_of("iaoeuy", ind + 1)) != string::npos)
	//{
	//	cout << ind << ",";
	//}
	// Въведете текст, определете дали съдържа коректно число.
	// 123 -> OK, 12%2a5  -> NO
	//size_t p = -1, cifri = 0;
	//string num;
	//getline(cin, num);
	//while ((p = num.find_first_of("0123456789.", p + 1)) != string::npos)
	//	cifri++;
	//if (cifri == num.size() && num.find(".")==num.rfind(".") && num.size()>0)
	//	cout << "OK\n";
	//else cout << "No\n";

	//2 Вариант
	//string num;
	//getline(cin, num);
	//if (num.find_first_not_of("0123456789.")==string::npos
	//	&& num.find(".") == num.rfind(".") && num.size()>0)
	//	cout << "OK\n";
	//else cout << "No\n";

	//Vuvedete izrechenie, izvedete i prebroyte dumite v nego
	//string izr = "Hello, I am a  studenttttt in amg";
	//string mask = "0123456789 .,;':"; /*maxword ="";*/
	//size_t nachalo, krai;
	//int c = 0;

	//nachalo = izr.find_first_not_of(mask);
	//while (string::npos != nachalo)
	//{
	//	c++;
	//	krai = izr.find_first_of(mask, nachalo);
	//	//if (maxword.size() < (krai - nachalo))
	//	//	maxword = izr.substr(nachalo, krai - nachalo);

	//	cout << izr.substr(nachalo, krai - nachalo) << endl;

	//	nachalo = izr.find_first_not_of(mask, krai);
	//}
	//cout << "Broy na dumite: " << c << endl;
	//cout << maxword;

	//string primer = "I                am                  a                  student";
	//size_t space = -1;
	//1 variant - erase(ot kude, kolko)
	//while ((space = primer.find("  ")) != string::npos)
	//{
	//	primer = primer.erase(space,1);
	//	cout << primer << endl;
	//}
	//2 variant - Replace(ot kude, kolko, s kakvo)
	//while ((space = primer.find("  ")) != string::npos)
	//{
	//	primer = primer.replace(space,2, " ");
	//	cout << primer << endl;

	//}
}


