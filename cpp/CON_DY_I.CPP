#include<iostream.h>
#include<conio.h>
#include<math.h>

class F {
	long int p;
	float r , amt;
	int n;

	public :
		F (long int p1 , int n1 , int r1);

		F (long int p1 , int n1 , float r1);

		void disp() {
			cout << "\nP = " << p << " n =  " << n << " r = " << r;
			cout << "\nYour amount with interust is " << amt;
		}

};

F :: F(long int p1 , int n1 , int r1) {
	p = p1;
	n = n1;
	r = r1;
	amt = p*pow((1.0 + r),n);
}

F :: F(long int p1 , int n1 , float r1) {
	p = p1;
	n = n1;
	r = r1;
	amt = p*pow((1.0 + r/100),n);
}

void main() {
	clrscr();
	long int p;
	float r;
	int n,r1;

	cout << "\n Enter value of p , n , r(float) :";
	cin >> p >> n >> r;
	F f1(p,n,r);

	cout << "\n Enter value of p , n , r(int) :";
	cin >> p >> n >> r1;
	F f2(p,n,r1);

	f1.disp();
	f2.disp();

	getch();
}