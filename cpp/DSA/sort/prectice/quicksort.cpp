// quicksort search with recursion @darshit_limbad
#include<iostream>
using namespace std;

int slice(int arr[] , int low , int high )  {
    int pivot=high;

    int i=low-1;

    for(int j=low ; j<high ; j++)   {
        if(arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i] , arr[j]);
        }
    }
    //changing pivot position 
    swap(arr[i+1] , arr[pivot]);
    return i+1;//returning pivot index
}

void quicksort(int arr[] , int low , int high)   {
    if(low<high)    {
        //pivot/partition point index
        int pi = slice(arr , low , high);

        //left side array
        quicksort(arr , low , pi-1);
        // right side array
        quicksort(arr , pi+1 , high);

    }
}

void swap(int &a , int &b)  {
    a^=b;
    b^=a;
    a^=b;
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

    int arr[] = {23,34,35,65,33,35,76};
    int n= sizeof(arr) / sizeof(arr[0]); //length of array
    display(arr , n);

    quicksort(arr , 0 , n-1);
    
    display(arr , n);

    return 0;
}