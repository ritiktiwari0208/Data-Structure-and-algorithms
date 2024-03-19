#include<iostream>
using namespace std;

int main(){
    //int arr[5]={4,2,8,5,1};
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    for (int i = n-2; i >=0; i--)
    {
        bool swapped=0;
        for (int j = 0; j <=i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=1;

            }
            
        }
        if (swapped==0)
        {
            break;
        }
        
        
    }
    for (int i = 0; i < 5; i++)
    {
       cout<<arr[i]<<" ";
    }
    

}