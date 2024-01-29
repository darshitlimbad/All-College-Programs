// Delete middle element of a stack

#include<iostream>
#include<vector>
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
        }   else { 
            top--;
        }
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
            return
             0;
        }
    }
};

int  find_mid_index(stack<int> st)  {
    int count=0;
    
    while(!st.isempty())  {
        count++;
        st.pop();
    }

    return (count/2);
}

void del_mid_ele(stack<int> &st , int mid_index)   {
    vector<int> arr;

    for(int i=0 ; i<mid_index ; i++)    {
       arr.push_back(st.stack[st.top]);
        st.pop();
    }

    st.pop();

    for(int i=mid_index-1 ; i>=0; i--)  {
        st.push(arr[i]);
    }
}

int main()  {
    stack<int> st;
    int temp;

    cout<<"enter 5 ele for a stack:";
    for(int i=0 ; i<5 ; i++)    {
        cin>>temp;
        st.push(temp);
    }
    
    st.display();
    cout << endl << endl << endl << endl;
    auto mid_index = find_mid_index(st);
    del_mid_ele(st , mid_index);

    st.display();

}