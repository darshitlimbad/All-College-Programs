#include <iostream>
#include <conio.h>

using namespace std;

class obj {
    int a;

    public : 
        void show() {
            cout << "enter a: " ;
            cin >> a;

            cout << "a: " << a << endl;
        }
};

int main() {
    obj A[5];

    for (int i = 0; i < 5; i++) {
        A[i].show();
    }

    return 0;
}