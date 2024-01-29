//default constructor
#include<iostream.h>
#include<conio.h>

class A{
	int a;

	public:

	A() {

		cout << " Enter number:";
		cin >> a;
	}
	void put() {
		cout << endl << a;
	}
};

int main() {
	A a1;
	clrscr();
	a1.put();
	getch();
	return 0;
}