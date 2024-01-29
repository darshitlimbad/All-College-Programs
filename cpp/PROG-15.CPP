#include<iostream.h>
#include<conio.h>

int main() {
		int i , j , count = 1 ,fleg = 0;
	clrscr();
		for(i=1 ; i<=5 ; i++)
		{
			for(j=1 ; j <= i ; j++)
			{
				cout << count++ << " ";
				if(j==2)
				{
					fleg=count;
				}
			}
			cout << endl;
			if(fleg != 0)
			{
				count = fleg-1;
			}
		}
	getch();
	return 0;
}