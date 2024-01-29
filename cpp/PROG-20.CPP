#include<iostream.h>
#include<conio.h>

int power(int x , int p = 2);

void main() {
	long int x , p ;

	clrscr();
	while(1) {
	cout << "\nENTER A NUM:";
	cin >> x;
	cout << "\nENTer POWER OF NUM:";
	cin >> p;

	cout << power(x , p);

	}

}

int power(int x , int p) {
	int temp=1;
	for(int i=1 ; i<=p ; i++)
	{
		temp *= x;
	}
	return temp;
}