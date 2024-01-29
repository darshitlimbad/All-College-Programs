//nested class membersy
#include<iostream.h>
#include<conio.h>

class A {
    int a;
	public:
		void getA(int x) {
			a=x;
		}
		void putA(){
			cout << "a: " << a << endl;
		}
};

class B : public A {
    int b;
    A a1;
    public:
	void getB(int x,int y) {
	    b=x;
	    a1.getA(y);
	}
	void putB(){
	    cout << "b: " << b  << endl;
	    a1.putA();
	}

};

void main(){
    clrscr();
    B b1;
    b1.getB(10,20);
    b1.putB();
    getch();
}