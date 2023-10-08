/*
* Author: Domina Olena
*/

#include<iostream>
#include<iomanip>
#include<ios>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	cout << "������������ ������ �4 ��. 413 ��. ĸ����� �����\n" << endl;

	cout << "������� ��� ����� ����� ����� enter\n" << endl;

	int a, b;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;

	cout << setw(75) << "����� ����� (������ ���� ����� 6)" << endl;

	cout << setw(40) << "����� ��� �������" << setw(60) << "����� �� �������" << endl;
	cout << setw(30) << "a=" << a << setw(60) << "a=" << setw(6) << a << endl;
	cout << setw(30) << "b=" << b << setw(60) << "b=" << setw(6) << b << endl;

	cout << "\n" << setw(40) <<"� ������������ �������" << setw(65) << "� ����������������� �������" << endl;

	cout << setw(30) << "a=" << setiosflags(ios::showbase) << oct << a << setw(60) << "a=" << hex << a << endl;
	cout << setw(30) << "b=" << oct << b << setw(60) << "b=" << hex << b << resetiosflags(ios::showbase) << endl;

	cout << "\n������� ���� ������������ ����� ����� enter\n" << endl;
	
	double c, d, e, f, g;
	cout << "c=";
	cin >> c;
	cout << "d=";
	cin >> d;
	cout << "e=";
	cin >> e;
	cout << "f=";
	cin >> f;
	cout << "g=";
	cin >> g;

	cout << setw(85) << "�������������� ����� (������ ���� ����� 8.4)" << endl;
	cout << setw(30) << "����� ��� �������" << setw(40) << "����� � ������. ������" << setw(40) << "����� � ��������� ������" << endl;
	cout << setw(20) << "c=" << setw(7) << left <<  c << setw(30) << right << "c=" << setw(8) << setiosflags(ios::fixed) << setprecision(4) << c << resetiosflags(ios::fixed) << setw(25) << "c=" << setiosflags(ios::scientific) << c << endl;
	cout << setw(20) << "d=" << setw(7) << left << resetiosflags(ios::scientific) << d << setw(30) << right << "d=" << setw(8) << setiosflags(ios::fixed) << setprecision(4) << d << resetiosflags(ios::fixed) << setw(25) << "d=" << setiosflags(ios::scientific) << d << endl;
	cout << setw(20) << "e=" << setw(7) << left << resetiosflags(ios::scientific) << e << setw(30) << right << "e=" << setw(8) << setiosflags(ios::fixed) << setprecision(4) << e << resetiosflags(ios::fixed) << setw(25) << "e=" << setiosflags(ios::scientific) << e << endl;
	cout << setw(20) << "f=" << setw(7) << left << resetiosflags(ios::scientific) << f << setw(30) << right << "f=" << setw(8) << setiosflags(ios::fixed) << setprecision(4) << f << resetiosflags(ios::fixed) << setw(25) << "f=" << setiosflags(ios::scientific) << f << endl;
	cout << setw(20) << "g=" << setw(7) << left << resetiosflags(ios::scientific) << g << setw(30) << right << "g=" << setw(8) << setiosflags(ios::fixed) << setprecision(4) << g << resetiosflags(ios::fixed) << setw(25) << "g=" << setiosflags(ios::scientific) << g << endl;

	cout << "\n������� ������ ����� enter\n" << endl;

	char p;
	cout << "p=";
	cin >> p;

	cout << setw(80) << "���������� ������ (������ ���� ����� 7)" << endl;

	cout << setw(40) << "����� ��� �������" << setw(60) << "����� �� �������" << endl;
	cout << setw(30) << "p=" << p << setw(60) << "p=" << setw(7) << p << endl;

	cout << "\n������� 0(false) ��� 1(true) enter\n" << endl;

	bool h;
	cout << "boolean=";
	cin >> h;

	cout << setw(80) << "���������� ������ (������ ���� ����� 6)" << endl;

	cout << setw(30) << "����� ��� �������" << setw(40) << "����� �� �������" << setw(40) << "��������� �����" << endl;
	cout << setw(25) << "boolean=" << noboolalpha << h << setw(37) << "boolean=" << setw(6) << noboolalpha << h << setw(35) << "boolean=" << boolalpha << h << endl;

	system("pause");
	return 0;
}