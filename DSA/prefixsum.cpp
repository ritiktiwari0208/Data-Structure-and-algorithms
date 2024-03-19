#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool divide(vector<int>arr){
    int total_sum=0 , prefix=0 , n=arr.size();
    for (int i = 0; i < n; i++)
    {
        total_sum+=arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        prefix+=arr[i];
        if (total_sum==2*prefix)
        {
            return 1;
        }  
    }
    return 0;
}

int main(){
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<int>v(n);
    cout<<"Enter the values in vector: ";
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    
    cout<<divide(v);
    


























    /*int arr[8]={3,4,-2,5,8,20,-10,8};
    int sum=0,value;
    for (int i = 0; i < 8; i++)
    {
        sum = sum+arr[i];
    }
    value=sum/2;
    int prefix=0 , num;
    for (int i = 0; i < 8; i++)
    {
        prefix = prefix+arr[i];
        if (prefix==value)
        {
            num=i;
            break;
        }
        
    }
    cout<<num<<endl;
    cout<<sum<<endl;
    cout<<value<<endl;
    int ans=0;
    int firstsubarray[5];
    int secondsubarray[3];

    for (int i = 0; i < 8; i++)
    {
        ans = ans+arr[i];
        if (ans<=value)
        {
            firstsubarray[i]=arr[i];
        }
        
        else{
            
            secondsubarray[i]=arr[i];
            
        }
        
    }
    for (int i = 0; i <5; i++)
    {
        cout<<firstsubarray[i]<<" ";
    }
    cout<<endl;
    for (int i = 5; i < 8; i++)
    {
        cout<<secondsubarray[i]<<" ";
    }*/
    
    
    
    
    
    
}