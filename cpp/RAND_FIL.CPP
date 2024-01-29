//random acces and modify in file
#include<iostream.h>
#include<conio.h>
#include<fstream.h>

class A{
	public:
	int rn;
	char nm[20];
	void get() {
		cout<< "enter roll no and name:" << endl;
		cin>> rn >> nm;
	}

	void put() {
		cout<< rn <<"\t\t"<< nm << endl;
	}
};

void main() {
clrscr();

	A a1;
	char c;

	fstream f1;
	f1.open("c:\\users\\darsh\\prog\\cpp\\rand_fil.dat" , ios::trunc | ios::in | ios::out | ios::binary | ios::ate);
	f1.seekp(0);
	while(1) {
		a1.get();
		f1.write((char*)&a1,sizeof(a1));

		cout<<endl<<"continue?";
		cin.get(c);

		if((c=cin.get()) != 'y')
			break;
	}

	f1.seekg(0);
	cout<<endl<<"Roll no \tName " << endl;
	while(1) {
		f1.read((char*)&a1,sizeof(a1));
		if(f1.eof())
			break;
		a1.put();
	}

	int file_size = f1.tellg();
	int rec_size = sizeof(a1);
	int norec = file_size / rec_size;
	cout << "total no of rec:"<<norec<<endl;
	cout << "enter rec no to modify :" ;
	int n;
	cin>>n;

	int pos = (n-1) * rec_size;
	f1.clear();
	a1.get();
	f1.seekp(pos);
	f1.write((char*)&a1 , sizeof(a1));
	cout << "modified data." ;
	cout<< "\nRoll no \t Name" << endl;

	f1.seekg(0);
	while(1) {
		f1.read((char*)&a1,sizeof(a1));
		if(f1.eof())
			break;
		a1.put();
	}


	f1.close();

	getch();
}