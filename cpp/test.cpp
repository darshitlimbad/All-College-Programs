#include <iostream>
using namespace std;

int *p = new int;

void test() {
    cout <<  *p ;
}
int main() {
    
    *p= 10;
        cout << "the fucking answer: " << *p << endl;

    test();

    delete p;

        cout << "the fucking answer: " << *p << endl;
    
    return 0;
}