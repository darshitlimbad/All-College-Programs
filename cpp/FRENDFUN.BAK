//friend function
#include<iostream.h>
#include<conio.h>

class A{
	int a;
	public:
		void get() {
			cout << "enter a input" ;
			cin >> a;
		}
		void put() {
			cout << "a = " << a << endl;
		}

		friend void sum(A a1,A a2);

};

void sum(A a1 ,A a2) {
	A a3 ;
	a3.a = a1.a+a2.a;
	cout << "a =" << a3.a <<endl;
}

void main() {
	A a1,a2;

	a1.get();
	a2.get();

	a1.put();
	a2.put();

	sum(a1,a2);
}