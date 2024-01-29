// merge sort prog 
// defination :- slice the arr into single ele and add into array from small to big;
#include<iostream>
using namespace std;

void merge(int arr[] , int const left , int const mid , int const right)    {

    int sarrone = mid - left + 1; // sub array one (number of arr ele in left arr)
    int sarrtwo = right - mid;  // sub array twos (number of arr ele in right arr)

    auto *leftarr = new int[sarrone];
    int *rightarr = new int[sarrtwo];

    for(int i=0 ; i<sarrone ; i++) {
        leftarr[i] = arr[left+i];
    }
    for(int j=0 ; j<sarrtwo ; j++) {
        rightarr[j] = arr[mid + 1 + j];
    }

    int indexofarr = left ; // index for the main arr;
    int indexofsone = 0; // index for the sub array one 
    int indexofstwo = 0; // index for the sub array two 

    while( (indexofsone < sarrone ) && (indexofstwo < sarrtwo) )    
    {
        if(leftarr[indexofsone] < rightarr[indexofstwo])    
        {
            arr[indexofarr++] = leftarr[indexofsone++]; 
        }
        else    {
            arr[indexofarr++] = rightarr[indexofstwo++];
        }
    }

    // add remaining left[] and right[] array ele in array start from left(small)
    while(indexofsone < sarrone)    {
        arr[indexofarr++] = leftarr[indexofsone++];
    }
    while( indexofstwo < sarrtwo )  {
        arr[indexofarr++] = rightarr[indexofstwo++];
    }

    delete[] leftarr , rightarr;

}

void mergesort(int arr[] , int const left , int const right)    {
    if(left >= right)   
        return ;

    int mid = (left+right) / 2;

    mergesort(arr , left , mid);
    mergesort(arr , mid+1 , right);

    merge(arr , left , mid , right);

}

void display(int arr[] , int size)  {
    for(int i = 0 ; i<=size ; i++) 
    {
        cout<<"------" ;
    } 
    cout << endl;   
    for(int i = 0 ; i<=size ; i++) 
    {
        cout<<"  " << arr[i] << " -" ;
    }    
    cout << endl;   

    for(int i = 0 ; i<=size ; i++) 
    { 
        cout<<"------" ;
    }  
    cout << endl;   
}

int main()  {

    // int arr[] = {34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,34,54,23,65,76,87,23,};
    
    int arr[] = {34,54,23,65,76,87,73,99, 225};
    int size = ( sizeof(arr) / sizeof(arr[0]) ) - 1;

    display(arr , size);

    mergesort(arr , 0 , size);

    display(arr , size);

    return 0;
}