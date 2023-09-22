#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;
class Sweets
{
public:
	Sweets() {};
	~Sweets() {};
	virtual void orderPrint() = 0;
	virtual double orderCalc() = 0;
protected:
	string ID;
};
class Cake : public Sweets
{
public:
	Cake(string klient, int parcheta, int vid)
	{
		ID = klient; p = parcheta; v = vid;
	}
	~Cake() {};
	virtual void orderPrint()
	{
		string vi;
		if (v == 1) vi = "shokolad";
		if (v == 2) vi = "smetana";
		if (v == 3) vi = "plodove";
		cout << "Klient: " << ID << ", Parcheta: " << p << ", Vid: " << vi << ",Cena: " << orderCalc() << endl;
	};
	virtual double orderCalc()
	{
		double cena;
		if (v == 1) cena = 5.8;
		if (v == 2) cena = 5.5;
		if (v == 3) cena = 5.6;
		cena = cena * p;
		return cena;
	};
private:
	int kol, p, v;
};
class Candy : public Sweets
{
public:
	Candy(string ime, double kolichestvo, int vid)
	{
		ID = ime; kol = kolichestvo; v = vid;
	};
	~Candy() {};
	virtual void orderPrint()
	{
		string vi;
		if (v == 1) vi = "shokoladovi";
		if (v == 2) vi = "kokosovi";
		if (v == 3) vi = "mentolovi";
		if (v == 4) vi = "vishna";
		if (v == 5) vi = "karameleni";
		cout << "Klient: " << ID << ", Vid: " << vi << "Kolichestvo: " << kol << ", Cena: " << orderCalc() << endl;
	};
	virtual double orderCalc()
	{
		double cena;
		if (v == 1) cena = 7.80;
		if (v == 2) cena = 5.60;
		if (v == 3) cena = 3.75;
		if (v == 4) cena = 4.50;
		if (v == 5) cena = 6.20;
		cena = cena * kol;
		return cena;
	};
private:
	double kol;
	int v;
};
class Ekler : public Sweets
{
public:
	Ekler(string ime, int broi)
	{
		ID = ime; kol = broi;
	};
	~Ekler() {};
	virtual void orderPrint()
	{
		cout << "Klient: " << ID << ", Kolichestvo: " << kol << ", Cena: " << orderCalc() << endl;
	};
	virtual double orderCalc()
	{
		double cena = 3.50;
		cena = cena * kol;
		return cena;
	};
private:
	int kol;
};
class queryOrder
{
public:
	queryOrder() {};
	~queryOrder() {};
	void Add(Sweets* p)
	{
		opashka.push_back(p);
	};
	void List()
	{
		cout << "Query:\n";
		if (opashka.empty())
			cout << "Empty\n";
		else
			for (int i = 0; i < opashka.size(); i++)
				opashka[i]->orderPrint();
	};
	double Process()
	{
		if (opashka.empty())
			return 0;
		double d = opashka[0]->orderCalc();
		opashka.erase(opashka.begin());
		return d;
	};
private:
	vector <Sweets* > opashka;
};


int main()
{
	queryOrder q;
	string izb = "9";
	fstream f;
	f.open("D:\\Poruchki.txt", ios::out);
	f << "Customer\t\tSweet\tType\tQantity\n=================================================\n";
	while (izb != "0")
	{
		cout << "\n\nMENU\n=============================\n";
		cout << "1.Cake\n2.Candy\n3.Ekler\n4.Spisak\n5.Obraboti\n";
		cout << "0.Izhod\n==============================\nIZBERI:";
		getline(cin, izb);
		if (izb == "4") q.List();
		if (izb == "5")
			cout << "Order prepared: " << q.Process() << "lv." << endl;
		if (izb == "1")
		{
			string ID; int v, parcheta;
			cout << "Name: "; getline(cin, ID);
			cout << "Parcheta: "; cin >> parcheta;
			cout << "1 - shokoladova" << endl;
			cout << "2 - smetanova" << endl;
			cout << "3 - plodova" << endl;
			cout << "Vid: "; cin >> v;
			q.Add(new Cake(ID, parcheta, v));
			string vi;
			if (v == 1) vi = "shokolad";
			if (v == 2) vi = "smetana";
			if (v == 3) vi = "plodove";
			f << ID << "\tCake\t" << vi << "\t" << parcheta << "\t" << endl;
		}
		if (izb == "2")
		{
			string ID; int v; double kol;
			cout << "Name: "; getline(cin, ID);
			cout << "1 - shokoladovi " << endl;
			cout << "2 - kokosovi " << endl;
			cout << "3 - mentolovi" << endl;
			cout << "4 - vishna" << endl;
			cout << "5 - karameleni" << endl;
			cout << "Vid: "; cin >> v;
			cout << "Kolichestvo: "; cin >> kol;
			q.Add(new Candy(ID, kol, v));
			string vi;
			if (v == 1) vi = "shokoladovi";
			if (v == 2) vi = "kokosovi";
			if (v == 3) vi = "mentolovi";
			if (v == 4) vi = "vishna";
			if (v == 5) vi = "karameleni";
			f << ID << "\tCandy\t" << v << "\t" << kol << " kg\t" << endl;
		}
		if (izb == "3")
		{
			string ID; int kol;
			cout << "Name: "; getline(cin, ID);
			cout << "Kolichestvo: "; cin >> kol;
			q.Add(new Ekler(ID, kol));
			f << ID << "\tEkler\t\t" << kol << "\t" << endl;
		}
		cin.ignore(10, '\n');
	}
	f.close();
}