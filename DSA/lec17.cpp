#include <iostream>
using namespace std;

int main(){
    int n , ele;
    cout<<"Size of array: ";
    cin>>n;
    
    /*cout<<"Enter the element for search for its possition: "<<endl;
    cin>>ele;*/

    int arr[n-1];
    cout<<"Enter the elements: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
    //index of an element
    int index=-1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==ele)
        {
            index=i;
            break;
        }
    }
    cout<<index;
    cout<<endl;

    //reverse of an array
    int i=0 ,j=n-1;
    while (i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
    cout<<arr[i]<<" ";
    }
    cout<<endl;


    //second largest
    int ans=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        
      if (arr[i]>ans)
      {
        ans=arr[i];
      }
        
    }
    int second=INT_MIN;
    for (int i = 0; i < n; i++)
    {
    if (ans!=arr[i])
    {
        second=max(second,arr[i]);
    }
    }
    cout<<second;

    // Missing number
    int sum=0;
    for (int i = 0; i <=n; i++)
    {
        sum=sum+i;
    }
    
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        ans=ans+arr[i];
    }
    cout<<"Missing number: "<<sum-ans<<endl;

    
    //rotate array by 1
    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i+1]=arr[i];
    }
    temp[0]=arr[n-1];
    for (int i = 0; i < n; i++)
    {
        cout<<temp[i]<<" ";
    }
    
    
    

    

    
    
    
    
    
    
    
    
    
}