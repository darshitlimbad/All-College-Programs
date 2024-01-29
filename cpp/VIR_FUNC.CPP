//virtual function
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class A{
	public:
	virtual void disp() {
		cout<<"disp a"<<endl;
	}
	void show() {
		cout << "show a"<<endl;
	}
};

class B:public A{
	public:
	void disp() {
		cout<<"disp b"<<endl;
	}
	void show() {
		cout << "show b"<<endl;
	}
};

void main() {
	clrscr();
	A a1,*a;
	B b1,*b;

	a=&a1;
	a->disp();
	a->show();
	a=&b1;
	a->disp();
	a->show();


	b=&b1;
	b->disp();
	b->show();

	//b=&a1;   derived to base pointer not allowed
	//b->disp();
	//b->show();

}