//prog-19 // overloading error prog
#include<iostream.h>
#include<conio.h>

int add(int a , int b)
{
	return a+b;
}
int add(int a , int b , int c=10)
{
	return a+b;
}



int main() {
	int a=10 ,b=20;
	clrscr();

	cout << add(a,b);

	getch();
	return 0;
}