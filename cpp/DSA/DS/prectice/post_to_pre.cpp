// Postfix to prefix operators
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

void post_to_pre(string &expr)  {

    stack<string> s;

    for(int i=0 ; i<expr.size() ; i++) 
    {
        if(is_operator(expr[i]))    {
            
            string op1 = s.top();
            s.pop();
            string op2 = s.top();
            s.pop();

            string temp = expr[i] + op2 + op1;

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

    string expr = "abc/-kd-*";

    cout << "Post expr : " << expr << endl;
    post_to_pre(expr);
    cout << "Pre expr : " << expr << endl ;

    return 0;

}