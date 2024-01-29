//archway / toran program no-2
#include<iostream.h>
#include<conio.h>


void main() {
clrscr();
    int n;

    cout << "\n enter Legnth of your archway:";
    cin >> n;

    for ( int i=1 ; i<=5 ; i++ ) {
	for ( int j=1 ; j<=n ; j++ ) {
	    for (int k=1 ; k < i ; k++) {   //1.
		cout << " ";
	    }

	    for (k=5 ; k>=i ; k--) {        //2.
		cout << "-";
	    }

	    for (k=4 ; k>=i ; k--) {      //3.
		cout <<"-";
	    }

	    for (k=2 ; k<=i ; k++)  {       //4.
		cout << " ";
	    }
	    cout << " " ;
	}
	cout << endl;
    }
}