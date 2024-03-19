#include<iostream>
using namespace std;

int main (){

    //reverse of string
    string s="ritik";
    int start=0 , end=s.size()-1;
    while (start<end)
    {
        swap(s[start] , s[end]);
        start++;
        end--;
    }
    cout<<s;


//size of string
    int size=0;
    while (s[size]!='\0')
    {
        size++;
    }
    cout<<size;

    //string palindrom
    string s1="naman";
    int start=0 , end=s1.size()-1;
    while (start<end)
    {
        if (s1[start]!=s1[end])
        {
            cout<<"Not palindrome";
            break;
        }
        
        start++;
        end--;
    }
    cout<<"palindrome";
    
}