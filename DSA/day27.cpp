#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
   /* for (int i = 1; i < n; i++)
    {
        for (int j = i; j >0; j--)
        {
            if (arr[j]>arr[j-1])
            {
                swap(arr[j],arr[j-1]);
            }
            else{
                break;
            }
            
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }*/
    
}