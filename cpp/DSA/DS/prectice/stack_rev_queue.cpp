//Reverse a Stack using Queue

#include<iostream>
#include<queue>
using namespace std;

template <class T>
class stack{
    public:

    T stack[5];
    int top = -1;

    void push(T node)   {
        if(isfull()) {
            return;
        }   else {
            stack[++top] = node;
        }
    }
    
    void pop() {
        if(isempty())   {
            return;
        }   else { top--;}
    }

    void display() {
        if(isempty()) {
            return;
        }   else    {
            for(int i=0 ; i<=top ; i++) {
                cout << " |-- " << stack[i] << " --|" << endl;
            }
        }
    }

    int isfull() {
        if( top == 5-1) {
            return 1;
        }   else {
            return 0;
        }
    }

    int isempty() {
        if( top == -1 ) {
            return 1;
        }   else {
            return 0;
        }
    }
};

void reverse_with_queue(stack<int> &ele , int size)    {
    queue<int> q;

    while(!ele.isempty()) {
        q.push(ele.stack[ele.top]);
        ele.pop();
    }

    while(!q.empty())   {
        ele.push(q.front());
        q.pop();
    }
}

int main()  {
    stack<int> ele;
    int temp;

    cout<<"enter 5 ele for a stack:";
    for(int i=0 ; i<5 ; i++)    {
        cin>>temp;
        ele.push(temp);
    }
    ele.display();

    cout<<endl<<endl<<endl<<endl;

    reverse_with_queue(ele , 5);

    ele.display();

}