#include <iostream>
#include <string>
using namespace std;

int main()
{
//�� �� ������ ��������, ����� ��� ������� ����� ��
//������������, �� ������ ��������������� ���, ��������� ������
//	� ���� � ���������
	//string email;
	//string country;
	//string asd;
	//cout << "Enter email" << endl;
	//cin >> email;
	//int n = email.find('@');
	//int LastChar = (email.size() - 2);
	//asd = email.substr(LastChar);
	//if (asd == "bg")
	//	country = "Bulgaria";
	//else
	//	country = "Ne e Bulgarski";
	//cout << "Potrebitel: " << email.substr(0, n) << endl;
	//cout << "Server: " << email.substr(n) << endl;
	//cout << "Country: " << country << endl;
//������� �� URL ����� �� ������������.�� �� �������
//	��������� ����������, �����, ���� � �����.
//����: http://static.ak.fbcdn.net/rsrc.php/zB3EA/hash/7x0yx3gz.gif
//�����:
//��������: http
//���� : static.ak.fbcdn.net
//��� : rsrc.php / zB3EA / hash
//���� : 7x0yx3gz.gif
	string url;
	string host;
	string path;
	cout << "Enter URL adress:" << endl;
	cin >> url;
	int n = url.find("://");

	string protocol = url.substr(0, n);
	host = url.substr(url.rfind("://") + 3);
	size_t hend = host.find("/");
	path = host.substr(hend);
	size_t path_last = path.rfind("/");
	cout << "URL protocol: " << protocol << endl;
	cout << "URL host: " << host.substr(0, hend) << endl;
	cout << "URL path: " << path.substr(0, path_last) << endl;
	cout << "File name: " << url.substr(url.rfind("/") + 1) << endl;
}
