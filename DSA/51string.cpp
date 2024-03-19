#include<iostream>
using namespace std;

// void rotateclockwise(string &s){
//     char c=s[s.size()-1];
//     for (int i = s.size()-2; i >=0; i--)
//     {
//         s[i+1]=s[i];
//     }
//     s[0]=c;    
// }

// void rotateanticlockwise(string &s){
//     char c=s[0];
//     for (int i = 1; i <s.size(); i++)
//     {
//         s[i-1]=s[i];
//     }
//     s[s.size()-1]=c;    
// }



int main(){
    // string str1="amazon";
    // string str2="onamaz";

    // string clockwise=str1;
    // rotateclockwise(clockwise);
    // rotateclockwise(clockwise);
    // if (clockwise==str2)
    // {
    //     cout<<"yes";
        
    // }
    // string anticlockwise=str1;
    // rotateanticlockwise(anticlockwise);
    // rotateanticlockwise(anticlockwise);
    // if (anticlockwise==str2)
    // {
    //     cout<<"yes";
    // }

    //check pangram

    // string sentence="the quick brown fox jumps over the lazy dog";
    // vector<bool>alpha(26 , 0);
    // for(int i=0; i<sentence.size(); i++){
    //     int index=sentence[i]-'a';
    //     alpha[index]=1;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (alpha[i]==1)
    //     {
    //         cout<<"pangram";
    //     }
    //     else{
    //         cout<<"Not pangram";
    //     }
        
    // }

    //sort of string
    string s="eabcdeb";
    vector<bool>count(26,0);
    for (int i = 0; i < s.size(); i++)
    {
        count[s[i]-'a']=count[s[i]-'a']+1;
    }
    string ans;
    for (int i = 0; i < 26; i++)
    {
        char c='a'+i;
        for (int i = 0; i < count[i]; i++)
        {
            ans+=c;
        }
        
    }
    cout<<ans;
    
    
    

    


}