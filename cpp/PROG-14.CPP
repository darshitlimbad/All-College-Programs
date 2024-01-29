//fibonancy series // 0 1 1 2 3 5
#include<conio.h>
#include<iostream.h>

void main() {
	int s = 0 , prev = 1 , curunt = 0 , i ;
	clrscr();

	for(i=1 ; i<=10 ; i++) {
		cout << s << " ";

		s = prev + curunt;
		prev = curunt;
		curunt = s;
	}

	getch();
}