//file handling
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

void main() {
	clrscr();
	int rn;
	char nm[20];

	cout<< "enter roll no: " ;
	cin >> rn;
	cout<< "Name:";
	cin>> nm;

	ofstream f1("c:/users/darsh/prog/cpp/customer.txt");
	f1<<rn <<endl;
	f1<<nm <<endl;
	f1.close();

	ifstream f2("c:/users/darsh/prog/cpp/customer.txt");
	f2>>rn>>nm;

	f2.close();

	cout<<rn<<endl<<nm;
}