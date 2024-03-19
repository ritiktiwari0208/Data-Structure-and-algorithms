#include<iostream>
using namespace std;

int main(){
    int arr[3][4]={3,4,5,6,8,9,10,12,14,16,17,20};
    int x=14;
    //linear search
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j]==x)
            {
                cout<<arr[i][j];
            }
            
        } 
        
    }
    

    //binary search with nlogn complexity
    for (int i = 0; i < 3; i++)
    {
        
        if (arr[i][0]<=x && arr[i][3]>=x)
        {
            int start=0 , end=3 , mid;
            while (start<=end)
            {
                
                mid=start+(end-start)/2;
                if (arr[i][mid]==x)
                {
                    cout<<arr[i][mid];
                    break;
                }
                else if (arr[i][mid]<x)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                
                
            }
            
        }
        
    }

    //binary search logn complexity
    int row , col ;
    int start=0 , end=11, mid;
            while (start<=end)
            {
                
                mid=start+(end-start)/2;
                row=mid/4;
                col=mid%4;
                if (arr[row][col]==x)
                {
                    cout<<arr[row][col];
                    break;
                }
                else if (arr[row][col]<x)
                {
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
                
                
            }

    
}