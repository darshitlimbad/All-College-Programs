#include<iostream>
using namespace std;


void selectionsort(int arr[] ) {
    int min;
    for (int i=0 ;i<6 ;i++)
    {
        min=i;
        for (int j=i ;j<6 ;j++)
        {
            if (arr[min] > arr[j])
                min = j;
        }

        if(min!=i)  {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i]=temp; // arr[min]
        }
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

    int arr[6]={5,3,4,6,1,2};
    
    display(arr , 6);

    selectionsort(arr);
    
    display(arr , 6);

    return 0;
}