//overload unari - operator by friend function
#include<iostream.h>
#include<conio.h>

class A
{
	int a,b;

	public:
	A(int a1,int b1)
	{
		a=a1;
		b=b1;
	}

	void put(){
		cout << "\na= " << a << "\t b= "<<b;
	}

	friend void operator -(A &a1);

};

void operator -(A &a1)
{
		a1.a=-a1.a;
		a1.b=-a1.b;
}

void main() {
	clrscr();
	A a1(32,-2);

	cout<<"\nbefore -a1";
	a1.put();

	-a1;

	cout<<"\nAfter -a1";
	a1.put();
}
