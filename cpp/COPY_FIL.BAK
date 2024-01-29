//copy file
#include<iostream.h>
#include<stdio.h>
#include<fstream.h>

int main(int argv , char* argc[])  {
	if(argv != 3) {
		cout<< "File Error!!" ;
		return 0;
	}

	ifstream if1(argc[1]);
	if(if1.fail()) {
		cout << "File 1 error!! " ;
		return 0;
	}

	ofstream of1(argc[2]);
	if(of1.fail()) {
		cout << "file 2 error!! " ;
		return 0;
	}

	char c;
	while(1) {
		c=if1.get();
		if( if1.eof() ) {
			break;
		}
		of1.put(c);
	}

	if( of1.good() ) {
		cout<< " File Coppied!! " ;
	}
}
