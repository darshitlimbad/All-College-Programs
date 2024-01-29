// binary search by mid point -@darshit_limbad 
#include<iostream>
using namespace std;

//use any sorting algo to sort the array
void selectionsort(int arr[] ,int size) { 
    int min;
    for (int i=0 ;i<size ;i++)
    {
        min=i;
        for (int j=i ;j<size ;j++)
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

// to displayin array
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

//the main brain :)
int binarysearch(int arr[] , int low , int top , int X)  {
    if(low <= top)   {
        int mid= (low+top) / 2;

        if(arr[mid] == X)   {
            return mid;
        }   else if(arr[mid] < X)   {
            return binarysearch(arr , mid+1 , top , X);
        }   else {// arr[mid] > X   
            return binarysearch(arr , low , mid-1 , X);
        }
    
    }
    // when it will not found any number which matches the search number.
    return -1;
    
}

int main()  {

    int arr[] = {3,34,54,45,65,78,95,87,25,35,28};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionsort(arr , n);

    int temp;
    display(arr , n);
    cout << "Enter a integer to search in the array:";
    cin>>temp;

   int searched_index = binarysearch(arr , 0 , n-1 , temp);

    (searched_index == -1)
    ? cout << "No value found in the array for " << temp << endl 
    : cout << "Your seached value found at the index " << searched_index << endl ; 
    return 0;
}