//file handling  with display reverse
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#define max 1000
class stack{
	char* arr;
	int top;

	public:
	stack() {
		arr = new char[max];
		top = -1;
	}

	int isempty() {
		return (top == -1);
	}
	void push(char x) {
		if(top == max-1) {
			cout << "satck is full!!" << endl;
			return;
		}

		arr[++top] = x;
	}

	void pop() {
		if(isempty()) {
			cout << "stack is Empty." << endl;
			return;
		}

		cout<< arr[top--];
	}

	void disp();
};

void stack :: disp() {
		if(isempty()){
			cout<<"stack is empty"<<endl;
			return;
		}

		int temp = 0;
		while(temp != top+1) {
			cout<<	arr[temp++];
		}
		cout<<endl<< "process finished"<<endl<<endl<<endl;
}

void main() {
	stack data;
	char c;
	clrscr();


	ifstream f1("c:/users/darsh/prog/cpp/customer.txt");
		f1.seekg(0);
		while((c = f1.get()) != EOF) {

			data.push(c);
		}

	f1.close();
	cout<< "Before reversing it." << endl;
	data.disp();

	cout<< "After reversing." << endl;
	while( !data.isempty() ) {
		data.pop();
	}


}