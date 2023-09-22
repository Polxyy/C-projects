#include <iostream>
#include <string>
#include <fstream>

using namespace std;

//Да се напише програма, която прочита данните от файл
//и извежда на екрана през коя дата има най- много заети стаи.

int main()
{
	string data;
	int staq;
	int max = 0;
	string max1;
	fstream fp;
	fp.open("C:\\Users\\ROG STRIX\\Desktop\\hotel.txt", ios::in);
	if (!fp.is_open()){
		cout << "File not found" << endl;
		return -1;
	}
	while (!fp.eof()) {
		getline(fp, data, '\t');
		fp >> staq;
		if (staq > max) {
			max = staq;
			max1 = data;
		}
	}
	max1.erase(remove(max1.begin(), max1.end(), '\n'));
	cout << max1 << "\t" << max;
	fp.close();
}