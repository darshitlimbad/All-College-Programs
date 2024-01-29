// Remove characters from the first string which are present in the second string
// #include <bits/stdc++.h>
#include<iostream>
#include<algorithm>

using namespace std;

string remove(string str , string del)  {
    for(auto i:del) {
        while(find(str.begin() , str.end() , i) != str.end())
        {
            auto temp=find(str.begin() , str.end() , i);
            str.erase(temp);
        }
    }
    return str;
}

int main()  {

    string str="hello world";
    string del="hld";

    cout <<str << endl << remove(str , del);
    
    return 0;
}