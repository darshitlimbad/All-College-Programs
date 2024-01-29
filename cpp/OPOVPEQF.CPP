//overload binari + and == operator by friend function
#include<iostream.h>
#include<conio.h>

class A
{
	int a;

	public:
	A(){}
	A(int a1)
	{
		a=a1;
	}

	void put(){
		cout << "\na= " << a ;
	}

	friend A operator +(A a1,A a2);
	friend int operator ==(A a1,A a2);
};

A operator +(A a1,A a2)
{
		A a3;
		a3.a=a1.a+a2.a;
		return a3;
}

int operator ==(A a1 , A a2) {
	if(a1.a == a2.a) {
		return 1;
	}
	else {
		return 0;
	}
}

void main() {
	clrscr();
	A a1(32),a2(32),a3;


	a1.put();
	a2.put();
	a3=a1+a2;
	a3.put();

	if(a1 == a2) {
		cout<< "\nequal" ;
	}
	else{
		cout << "\nNot Equal";
	}
}
