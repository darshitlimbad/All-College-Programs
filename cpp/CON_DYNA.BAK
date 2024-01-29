#include<iostream.h>
#include<conio.h>
#include<string.h>

class string {
		char *nm;
		int len;
	public:

		string()
		{
			len=0;
			nm = new char(len+1);
		}

		string(char *s) {
			len = strlen(s);
			nm = new char[len+1];
			strcpy(nm , s);
		}

		void disp() {
			cout << " \n Name : " << nm;
		}

		friend string concat(string ss1 , string ss2);
};

string concat (string ss1 , string ss2) {
	string ss3;
	ss3.len=ss1.len + ss2.len;
	ss3.nm = new char[ss3.len+1];
	strcpy(ss3.nm , ss1.nm);
	strcat(ss3.nm , " ");
	strcat(ss3.nm , ss2.nm);

	cout << "\n Name : " << ss3.nm;

}

void main() {
	clrscr();
	string s1("darshit") , s2("limbad") , s3("whywhy");
	s1.disp();
	s2.disp();
	s3.disp();

	concat(s1,s2);
	getch();
}