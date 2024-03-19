#include <iostream>
using namespace std;

int main(){
    int arr[5]={0,0,1,1,0};
    int start=0 , end=4 , count=0;
    for (int i = 0; i < 5-count; i++)
    {
        if (arr[i]==0)
        {
            arr[start]=arr[i];
            start++;
        }
        else {
            swap(arr[end],arr[i]);
            end--;
            count++;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        
        cout<<arr[i]<<" ";
    }

    /*while (start<end){
        if (arr[start]==0)
        {
            start++;
        }
        else {
            if (arr[end]==0)
            {
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
            else{
                end--;
            }
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        
        cout<<arr[i]<<" ";
    }*/
    

    // also by traversing
    //by the help of vector
    
    
    
    
}