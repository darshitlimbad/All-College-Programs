//prog to check parenthesis in array with stack
#include<iostream>
#include<cstring>
using namespace std;
#define size 10

class p_checker {

    char braces[size] ;
    int top = -1;    

    public:

    void check(char arr[])    {

        for(int i=0 ; i<strlen(arr) ; i++)   
        {
            if((arr[i]=='[') || (arr[i]=='{') || (arr[i]=='(')) {
                braces[++top] = arr[i];
            }   else if( (braces[top] == '[') && (arr[i]== ']') 
                    || (braces[top] == '{') && (arr[i]== '}') 
                    || (braces[top] == '(') && (arr[i]== ')') )    
            {
                top--;
            }
        }

        cout<< arr << endl;
        if(top+1 == 0)  {
            cout << "Balanced" << endl;
        }   else {
            cout << "Not Balanced" << endl;
        }
    }

};

int main()  {

    char arr[20] = "{[()()][()]}";
    char arr2[10] = "{[}]([)]";
    char arr3[10] = "{}[]";

    p_checker checker;
    checker.check(arr2);
    return 0;
}