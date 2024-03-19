#include <iostream>
#include<vector>
using namespace std;

int main(){
    //create vector
    // vector<vector<int> >matrix(3 , vector<int>(4,3));
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
        
    // }
    int row=3 , col=4;
    int arr[3][4]={3,4,2,5,7,1,0,10,23,21,12,34};
    
    
    // for (int j = 0; j < 4; j++)
    // {
    //     if (j%2==0)
    //     {
    //         for (int i = 0; i < 3; i++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     }
    //     else{
    //     for (int i = 2; i >= 0; i--)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     }
       
    // }
    
    // for (int j = 0; j < 4; j++)
    //  {
    //     for (int i = 0; i < 3; i++)
    //    {
    //         cout<<arr[i][j]<<" ";
    //    }
        
    // }
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 4; j++)
       {
            cout<<arr[i][j]<<" ";
       }
        
    }
    cout<<endl;
   int matrix[4][3];
    for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 4; j++)
       {
        if (i!=j)
        {
           matrix[j][i]=arr[i][j]; 
        }
        else{
            matrix[i][j]=arr[i][j];
        }
       }
        
    }
for (int i = 0; i < 3; i++)
     {
        for (int j = 0; j < 4; j++)
       {
            cout<<matrix[i][j]<<" ";
       }
        
    }

    
}