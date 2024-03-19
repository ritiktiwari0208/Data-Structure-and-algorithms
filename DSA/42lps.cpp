#include<iostream>
using namespace std;

int main(){
    string s = "ABCfEABCD";
    int length=0 , pre=0 , suf=pre+1;
    while (suf<s.size())
    {
       if (s[pre]==s[suf])
       {
        length++;
        pre++;
        suf++;
       }
       else{
        suf++;
       }
        
    }

    cout<<length;
    
}