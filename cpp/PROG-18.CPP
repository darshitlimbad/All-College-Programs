//print sum of odd and even
#include<iostream.h>
#include<conio.h>

int *odd = new int(100) , *even = new int(100) ;
		      //mc-max count
int o_s=0 , o_mc=0 , e_s = 0 , e_mc=0;

int even_num_in(int num) {
	even[e_mc++] = num;
	e_s += num ;
	return 0;
}

int odd_num_in(int num) {
	odd[o_mc++] = num;
	o_s += num ;
	return 0;
}

int tot_print()
{
	//extra no need to look at this
	cout << endl<< endl << endl<< endl<< endl<< endl << "\t"<< "\t"<< "\t";

	cout << endl << "YOUR SUM OF EVEN NUM IS :" << endl;

	for(int i = 0 ; i<e_mc ; i++) {
		cout << even[i] ;
		if(i!=e_mc-1)
			cout << " + ";
	}
	cout << " = " << e_s << endl;

	cout << endl << "YOUR SUM OF ODD NUM IS :" << endl;

	for( i = 0 ; i<o_mc ; i++) {
		cout << odd[i]  ;
		if(i!=o_mc-1)
			cout << " + ";
	}

	cout << " = " << o_s << endl;

	return 0;
}

int main() {
	int  n1 , n2 ;

	int i;

	clrscr();

	do{
		cout<< "enter two number(-999 for exit):\n";
		cin >> n1 >> n2;

		if((n1!=-999) && (n2!=-999))
		{
			(n1%2 == 0) ? even_num_in(n1) : odd_num_in(n1) ;
			(n2%2 == 0) ? even_num_in(n2) : odd_num_in(n2) ;
		}

	}while( (n1 !=  -999) && (n2 != -999) );

	tot_print();

	getch();
	return 0;
}


