#include<iostream>
using namespace std;

void sortincrease(int arr[],int n){
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
}
void sortdecrease(int arr[] , int n){
    for (int i = 1; i < n; i++)
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
}
int binarysearchincrease(int arr[], int ele , int n){
    int start=0 , end=n-1 , mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==ele)
        {
            cout<<"Element found at: "<<mid;
            break;
        }
        else if (arr[mid]>ele)
        {
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }   
    }

    return -1;
}

int binarysearchdecrease(int arr[],int ele , int n){
    int start=0 , end=n-1 , mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==ele)
        {
            cout<<"Element found at: "<<mid;
            break;
        }
        else if (arr[mid]>ele)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }   
    }

    return -1;
}

int main(){
    
    // element of array in decreasing order
    int arr[1000];
    int n;
    cout<<"Enter array size less than than 1000: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    int ele;
    cout<<"Enter the search element: ";
    cin>>ele;

    sortincrease(arr,n);
    sortdecrease(arr,n);
    cout<<binarysearchincrease(arr,ele,n)<<endl;
    //cout<<binarysearchdecrease(arr,ele,n);

    /*int start=0 , end=n-1 , mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==ele)
        {
            cout<<"Element found at: "<<mid;
            break;
        }
        else if (arr[mid]>ele)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }   
    }

    return -1;
    
    // element of array in increasing order
    int arr[1000];
    int n;
    cout<<"Enter array size less than than 1000: ";
    cin>>n;
    cout<<"Enter element in array in decreasing order: ";
    for (int i = 0; i < n; i++)
    {
    cin>>arr[i];
    }
    int ele;
    cout<<"Enter the search element: ";
    cin>>ele;

    int start=0 , end=n-1 , mid;
    while (start<=end)
    {
        mid=start+(end-start)/2;
        if (arr[mid]==ele)
        {
            cout<<"Element found at: "<<mid;
            break;
        }
        else if (arr[mid]>ele)
        {
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }   
    }

    return -1;*/
    
}