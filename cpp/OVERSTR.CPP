//overload operator func
#include<iostream.h>
#include<conio.h>
#include<string.h>

class string{
	int len;
	char *nm;
	public:
		string() {
			len = 0;
			nm= new char[len+1];
		}
		string(char *s) {
			len = strlen(s);
			nm= new char[len+1];
			strcpy(nm,s);
		}

		void disp() {
			cout << nm << endl;
		}

		friend string operator +(string s1,string s2);
		int operator ==(string s2) {
			if(strcmp(nm,s2.nm) == 0)
				return 1;
			else
				return 0;
		}
};

string operator +(string s1,string s2) {
	string s3;
	s3.len=s1.len+s2.len;
	s3.nm = new char[s3.len];
	strcpy(s3.nm,s1.nm);
	strcat(s3.nm, " ");
	strcat(s3.nm,s2.nm);
	return s3;
}

void main() {
	char nm[30],nm2[30];

	clrscr();
	cout<<"\n enter two string:";
	cin >> nm >> nm2;
	string s1(nm),s2(nm2),s3;

	s3= s1+s2;

	s1.disp();
	s2.disp();
	s3.disp();

	if(s1 == s2) {
		cout<<"Equal";
	}
	else{
		cout << "not equal";
	}
}