#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stud
{
public:
	Stud(); //Konstruktor
	~Stud();  //Destruktor
	Stud(int f, string i) { //2ri konstruktor
		fn = f; ime = i; kurs = -1;
	}
	Stud(int f, string i,int k) { //3ti konstruktor
		fn = f; ime = i; setKurs(k);
	}
	int fn;
	string ime;
	void View() {
		cout << "Name: " << ime << "\tID: " << fn;
		cout << "\tLevel: " << kurs << ": " << KursName() << endl;
	}

	int getKurs() {
		return kurs;
	}
	bool setKurs(int newkurs) {
		if (newkurs >= 1 && newkurs <= 5) {
			kurs = newkurs;
			return true;
		}
		else return false;
	}
	string KursName() {
		string names[] = { "1 kurs","2 kurs","3 kurs", "4 kurs","Magistri" };
		if (kurs == -1) return "Error";
		else return names[kurs -1];
	}

private:
	int kurs;
};

Stud::Stud()
{
	fn = -1; ime = "Noname"; kurs = -1;
}

Stud::~Stud()
{
}

int main() {
	Stud a;
	a.View();
	a.fn = 114782; a.ime = "Ivan Petrov";
	a.setKurs(1);
	a.View();
	Stud b(12345, "Ana Koleva");
	b.View();
	Stud c(12345, "Ivan Ivanov", 3);
	c.View();
	// Vuvedete danni ot klavuaturata i suzdayte obekt s tqh
	//string ime; int fak, kurs;
	//cout << "ID: "; cin >> fak;
	//cin.ignore(100, '\n');
	//cout << "Name: "; getline(cin, ime);
	//cout << "Level: "; cin >> kurs;
	//Stud test(fak,ime,kurs);
	//test.View();
	
	//Vuvedete danni za studenti i gi suhranete vuv vektor
	// Za kray 0 ili -1;
	vector<Stud*> vec;
	while (true) {
		string ime; int fak, kurs;
	cout << "ID: "; cin >> fak;
	if (fak == 0 || fak == -1)break;
	cin.ignore(100, '\n');
	cout << "Name: "; getline(cin, ime);
	cout << "Level: "; cin >> kurs;
	vec.push_back(new Stud(fak, ime, kurs));
	}
	//Izvejdane na vsichki studenti
	for (int i = 0; i < vec.size(); i++) {
		vec[i]->View();
	}
	return 0;
}
