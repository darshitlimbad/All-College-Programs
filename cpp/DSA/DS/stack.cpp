//stack prog
// reverse with recursion?
#include<iostream>
using namespace std;
#define size 5

template <class T>
class stack{
    T arr[size];
    int top = -1;

    void total() {
        if(isempty())   {
            return;
        }   else    {
            cout << "total $node count is " << top + 1 << endl;
        }
    }

    public:
    stack() {}

    stack(T node) {
        arr[++top] = node;
    }

    void push(T node , int x=0)   {
        if(isfull()) {
            return;
        }   else {
            arr[++top] = node;
            if(x!=1){
                cout << "Node added sucessfully." << endl;;
            }
        }
    }

    void pop(int x=0) {
        if(isempty())   {
            return;
        }   else if(x == 1)   { top--;} //for silent poping
            else    {
            cout<<"Your node " << arr[top--] << " is deleted succesfully."  << endl;
        }
    }

    void display() {
        if(isempty()) {
            return;
        }   else    {
            for(int i=top ; i>=0 ; i--) {
                cout << " |-- " << arr[i] << " --|" << endl;
            }
            total();
        }
    }

    void peek_by_value( T node ) {
        if (isempty()) {
            return;
        }   else    {
            int temp = 0;
            while( (arr[temp] != node) && (temp<=top) ) {
                temp++;
            }
            if(arr[temp] == node) {
                cout << "Your searched value " << node << " is at " << top-temp+1 << " position." << endl; 
                return;
            }   else {
                cout << "No Value found." << endl;
            }
        }
    }

    void peek_by_pos(int pos) {
        if (isempty()) {
            return;
        }   else if(pos > top+1 || pos <= 0)   {
            cout << "Position is incorrect!!" << endl;
        }   else    {
            cout << "Your peeked position value is : " << arr[top - pos + 1] << endl;
        }
    }

    void reverse()   {
        if(isempty(1))  {
            return ;
        }

        T top_ele = arr[top];
        pop(1);
        reverse();
        insertAtBotom(top_ele);

    }

    void insertAtBotom(T ele)  {
        if(isempty(1))  {
            push(ele , 1);
            return ;
        }

        T top_ele = arr[top];
        pop(1);

        insertAtBotom(ele);
        push(top_ele , 1);
    }

    int isfull() {
        if( top == size-1) {
            cout<<"stack is full" << endl;;
            return 1;
        }   else {
            return 0;
        }
    }

    int isempty(int x=0) {
        if( top == -1 ) {
            if(x!=1)    {//silent empty check
            cout<<"stack is empty" << endl;
            }
            return 1;
        }   else {
            return 0;
        }
    }

};

int main() {
    stack<int> marks;
    int action,temp;

    while(action != 7) {
    cout << "\t\t --------Marks Management Menu--------- " << endl;
    cout << "----------------------------------------------------------" << endl;
    cout<< "enter number for below action :" << endl;
    cout << "1-push , 2-pop , 3- display , 4 - peek by value , 5 - peek by position , 6-reverse the mark list, 7-exit code" << endl;
    cin >> action;
        switch(action) {
            case 1 :
                cout<<"enter value for marks:";
                cin>>temp;

                marks.push(temp);
            break;
            
            case 2:
                marks.pop();
            break;

            case 3:
                marks.display();
            break;

            case 4:
                marks.display();
                cout<<"enter value to search in marks:";
                cin>>temp;

                marks.peek_by_value(temp);
            break;

            case 5:
                marks.display();
                cout<<"enter position of marks:";
                cin>>temp;

                marks.peek_by_pos(temp);
            break;

            case 6:
                if(!marks.isempty(1))    {
                    marks.reverse();
                    cout<<"Your list is Reversed succesfully."<<endl;
                }   else    {
                    marks.isempty();
                }
            break;
            default:
                action = 7;
        }
    }
    return 0;
}
