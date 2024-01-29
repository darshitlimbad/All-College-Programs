// 2d pointer array
#include<iostream.h>
#include<conio.h>

class A {
	int **m , r , c;
	public:
		A(int r1 , int c1);
		~A();

		void get();
		void put();
};

A :: A(int r1 , int c1) {
	r = r1;
	c = c1;

	m = new int *[r];
	for (int i=0 ; i<r ; i++)
		m[i]=new int[c];
}

A :: ~A() {
	for(int i=0 ; i<r ; i++) {
		delete m[i];
	}
	delete m;
}

void A :: get() {
	for (int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cout<<"\n enter val:";
			cin >> m[i][j];
		}
	}
}

void A :: put() {
	 for (int i=0 ; i<r ; i++)
	{
		for(int j=0 ; j<c ; j++)
		{
			cout<<m[i][j] << "\t";
		}
		cout<<endl;
	}
}

void main() {
	clrscr();
	int r,c;

	cout << "Enter row and col:";
	cin>>r>>c;

	A m1(r,c);
	m1.get();
	m1.put();

	getch();
}