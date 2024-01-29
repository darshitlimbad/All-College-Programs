//constructor in derived class
#include<iostream.h>
#include<conio.h>

class A {
    int a;
	public:
	A(int x) {
	    a=x;
	}
	void putA(){
	    cout << "a: " << a << endl;
	}
};

class C : public A {
    int c;
    int c1,c2;
	public:
	C(int x,int y):A(y) {
	    c=x;
	}
	void putC(){
	    cout << "c: " << c << endl;

	}
};

void main(){
    clrscr();
    C c1(10,30);
    c1.putC();
    c1.putA();

    getch();
}