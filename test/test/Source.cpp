#include <vector>
#include <fstream>
#include <string>
#include <iostream>
int total = 0;
int totalspa = 0;
using namespace std;
class customer
{
public:
	customer() {};
	~customer() {};
	string name;
	virtual void printInfo() = 0;
	virtual bool checkCapacity() = 0;
protected:
	string date;
};
//================================================================//
class Restorant :public customer
{
public:

	Restorant(string ime, string time, int numpeople) {
		name = ime; date = time; people = numpeople;
	};
	~Restorant() {};
	virtual void printInfo() {
		cout << "The reservation for the restaurant is on the name of " << name
			<< " the arrival time " << date << " and the reservation is for " << people << " people" << endl;
	}
	virtual bool checkCapacity() {
		if (total + people > 60)
		{
			cout << "Sorry we only have space for " << 60 - total << " people" << endl;
			return false;
		}
		else {
			cout << "The reservation was succesfully made" << endl;
			total += people;
			cout << "Current amount of people for the restaurant " << total << endl << endl;
			return true;
		}
	}

private:
	int people;
};

class Rooms :public customer
{
public:
	Rooms(string ime, string data, int people) {
		name = ime; date = data; guests = people;
	};
	~Rooms() {};
	virtual void printInfo() {
		cout << "The reservation for the a room is on the name of " << name << " the arrival date is " << date << " and the reservation is for " << guests << " guests" << endl;
	}
	virtual bool checkCapacity() {
		if (guests > 4)
		{
			cout << "Sorry the room is for 4 people max" << endl << endl;
			return false;
		}
		else {
			cout << "The reservation was succesfully made" << endl << endl;
			return true;
		}
	}
private:
	int guests;
};
class Spa :public customer
{
public:
	Spa(string ime, string time, int people) {
		name = ime; date = time; guests = people;
	};
	~Spa() {};
	virtual void printInfo() {
		cout << "The spa reservation is on the name of " << name << " the arrival time is " << date << " and the reservation is for " << guests << " guests" << endl;
	}
	virtual bool checkCapacity() {
		if (totalspa + guests > 20)
		{
			cout << "Sorry we only have space for " << 20 - totalspa << " guests" << endl << endl;
			return false;
		}
		else {
			cout << "The reservation was succesfully made" << endl;
			totalspa += guests;
			cout << "current amount of guests that have reserved the spa: " << totalspa << endl << endl;
			return true;
		}
	}

private:
	int guests;
};


class reservations
{
public:
	reservations() {};
	~reservations() {};
	void makeReservation(customer* c) {
		reservationList.push_back(c);

	}

	void list() {
		cout << "Query:\n";
		if (reservationList.empty())
		{
			cout << "Empty\n";
		}
		else
			for (int i = 0; i < reservationList.size(); i++)
			{
				reservationList[i]->printInfo();
			}
	};


private:
	vector<customer*>reservationList;
};
int main()
{
	fstream f1;
	f1.open("d:\\reservationList.txt", ios::out);
	reservations r;
	string izb = "9";
	while (izb != "0")
	{
		cout << "MENU\n=======================================\n";
		cout << "1.staq\n2.restaurant\n3.spa\n4.spisak\n";
		cout << "0.izhod\n======================================\nIzberi:";
		getline(cin, izb);
		if (izb == "4") r.list();
		if (izb == "1") {
			string ime; string data; int people;
			cout << "Name: "; getline(cin, ime);
			cout << "Arrival date: "; getline(cin, data);
			cout << "Give number of people: "; cin >> people;
			cin.ignore(10, '\n');

			Rooms* ptr;
			ptr = new Rooms(ime, data, people);
			if (ptr->checkCapacity() == true) {
				r.makeReservation(ptr);
				f1 << ime << "\t" << data << "\t" << people << " (Room)" << endl;
			}
		}
		if (izb == "2") {
			string name; string time; int people;
			cout << "Name: "; getline(cin, name);
			cout << "Time: ";  getline(cin, time);
			cout << "Number of people: "; cin >> people;
			cin.ignore(10, '\n');
			Restorant* ptr;
			ptr = new Restorant(name, time, people);
			if (ptr->checkCapacity() == true) {
				r.makeReservation(ptr);
				f1 << name << "\t" << time << "\t" << people << " (Restaurant)" << endl;
			}
		}
		if (izb == "3") {
			string name; string time; int people;
			cout << "Name: "; getline(cin, name);
			cout << "Time: ";  getline(cin, time);
			cout << "Number of people: "; cin >> people;
			cin.ignore(10, '\n');
			Spa* ptr;
			ptr = new Spa(name, time, people);
			if (ptr->checkCapacity() == true) {
				r.makeReservation(ptr);
				f1 << name << "\t" << time << "\t" << people << " (Spa)" << endl;
			}
		}



	}
	f1.close();
	cin.ignore(10, '\n');
}