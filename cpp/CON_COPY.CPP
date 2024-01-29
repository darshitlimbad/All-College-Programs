#include<iostream.h>
#include<conio.h>

class C {
	int a;
	public:
		C(int x) {
		       a = x;
		       cout << "\n para";
		}
		C(C &c1) {
			a = c1.a;
			cout << "\ncopy";
		}
};

void main()
{
	clrscr();
	C c1(45) , c2(c1);


}