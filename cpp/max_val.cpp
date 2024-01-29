// Find the maximum number using this
#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void get(int x=0, int y=0)
    {
        a = x;
        b = y;
    }
    void show()
    {
        cout << "a = " << a << "\tb = " << b << endl;
    }
    A max(A x);
};

A A :: max(A x)
{
    if(x.a > a)
    {
        return x;
    }
    else{
        return (*this);
    }
}
// A A :: max(A x)
// {
//     // compare the sum of a and b in both objects
//     if(x.a + x.b > a + b)
//     {
//         return x;
//     }
//     else{
//         return (*this);
//     }
// }

int main()
{
    A a1,a2;
    cout << "Object 1:"<<endl;
    a1.get(20,20);
    a1.show();
    cout << "Object 2:"<<endl;
    a2.get(20,10);
    a2.show();
    cout << "Maximum number is :"<<endl;
    A a3 = a2.max(a1);
    a3.show();
    return 0;
}