// Prefix to postfix operators
#include<iostream>
#include<stack>
using namespace std;

bool is_operator(char var)  {
    switch (var)
    {
    case '/':
    case '*':
    case '-':
    case '+':
        return true;
        break;
    }
    return false;
}

void pre_to_post(string &expr)  {

    stack<string> s;

    for(int i=expr.size()-1 ; i>=0 ; i--) 
    {
        if(is_operator(expr[i]))    {
            
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            string temp = op1 + op2 + expr[i];

            s.push(temp);

        }   else    {

            s.push(string(1 , expr[i]));

        }
    }
    
    expr = "";
    while (!s.empty())
    {
        expr += s.top();
        s.pop();
    }
    

}

int main()  {

    string expr = "*-a/bc-kd";

    cout << "pre expr : " << expr << endl;
    pre_to_post(expr);
    cout << "post expr : " << expr << endl ;

    return 0;

}