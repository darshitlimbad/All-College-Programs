/*
10
4	9
3	5	8
1	2	6	7
*/
#include<iostream.h>
#include<conio.h>

rec(int n);

void main() {
	clrscr();

	int p , n ;

	cin >> n;

	p=rec(n);

	for(int i = 1 ; i <= n ; i++)
	{

	}
	getch();

}

int rec(int n) {
    if (n > 0) {
	return n + rec(n - 1);
    } else {
        return 0;
    }
}