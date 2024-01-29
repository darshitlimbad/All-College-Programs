//parameterized constructor
#include<iostream.h>
#include<conio.h>

class A{
	int a;

	public:

	A(int x) {
		a = x;
	}

	void put() {
		cout << endl << a;
	}
};

int main() {
	int a;
	cout << " Enter number:";
	cin >> a;

	A a1(a) ;// a2;
		// error:could not find a match for 'A::A()';

	a1.put();
	getch();
	return 0;
}