#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

class str_action{
    
    stack<char> temp;

    public:

    void reverse_array(char arr[])   {

        for(int i=0 ; i < strlen(arr) ; i++) 
        {
            temp.push(arr[i]);
        }
        int i=0;
        while(!temp.empty())    
        {
            arr[i++] = temp.top();
            temp.pop();
        }

        // cout<< arr;

    }

};

int main()  {

    str_action cls_r;
    char arr[20] = "hello world";
    cls_r.reverse_array(arr);
    cout << arr;

};