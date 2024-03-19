#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<endl;
    int a[1000];
    cout<<"Enter the vaules in array: ";
    for (int i = 0; i < n; i++)
      {
        cin>>a[i];
      }
    for (int i = 0; i < n; i++)
      {
        cout<<a[i]<<" ";
      }
    cout<<endl;
    

    //max of an array
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]>ans)
//         {
//             ans=a[i];
//         }
        
//     }
//     cout<<"Max of array: "<<ans<<endl;
// //print a-z in array
//     int ans=0;
//     for (int i = 0; i < n; i++)
//     {
//         ans=ans+a[i];
//     }
//     cout<<ans<<endl;
//     ans=ans/n;
//     cout<<ans;
//     char arr[26];
//     for (int i = 0; i < 26; i++)
//     {
//         char ch='a';
//         char ans=ch+i;
//         arr[i]=ans;
//     }
//     for (int i = 0; i < 26; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
    

    
    
}