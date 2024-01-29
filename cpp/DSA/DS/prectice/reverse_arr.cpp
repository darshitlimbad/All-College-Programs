// reversing array of integer with stack

#include<iostream>
#include<stack>
using namespace std;

void reverse(int arr[] , int size)  {
    stack<int> s;

    for(int i=0 ; i<size ; i++) 
    {
        s.push(arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = s.top();
        s.pop();
    }
    
}

void display(int arr[] , int size)  {
    for(int i = 0 ; i<size ; i++) 
    {
        cout<<"------" ;
    } 
    cout << endl;   
    for(int i = 0 ; i<size ; i++) 
    {
        cout<<"  " << arr[i] << " -" ;
    }    
    cout << endl;   

    for(int i = 0 ; i<size ; i++) 
    { 
        cout<<"------" ;
    }  
    cout << endl;   
}

int main()  {
    int arr[] = {23,34,54,65,76,89};
    int n=sizeof(arr) / sizeof(arr[0]);
    display(arr , n);

    reverse(arr , n);

    display(arr , n);
    return 0;
}