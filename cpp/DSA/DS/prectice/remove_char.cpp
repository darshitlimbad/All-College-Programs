// Remove characters from the first string which are present in the second string

#include<iostream>
#include<stack>
#define NO_OF_CHAR 256
using namespace std;

int* getcountarr(string find)    {
    int *count = (int*)calloc(sizeof(int), NO_OF_CHAR);;

    for(int i=0 ; i<find.size() ; i++)  
    {
        count[find[i]]++;
    }
    return count;
}

string remove(string arr , string find)   {
    int *count = getcountarr(find);
    string str="";
    
    int i=0;
    while(i<arr.size())    {
        char temp = arr[i++];
        if(count[temp] == 0)
        {
            str.push_back(temp);
        }
    }
    return str;
}

int main()  {
    string arr = "Hello world";
    string find = "Hld";
    cout << arr << endl;
    cout << remove(arr , find) << endl;
}