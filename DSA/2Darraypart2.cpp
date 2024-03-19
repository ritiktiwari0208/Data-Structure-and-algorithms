#include<iostream>
using namespace std;

int main(){
    int arr[4][4]={ 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};

    //first approach for rotation of matrix by 90 degree
    // int ans[4][4];
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         ans[j][3-i]=arr[i][j];
    //     }    
        
    // }

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout<<ans[i][j]<<" ";
    //     }    
        
    // }

    //second approach
    //transpose the matrix
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = i+1; j < 4; j++)
    //     {
    //         swap(arr[i][j],arr[j][i]);
    //     }
        
    // }
    // //reverse of matrix
    // for (int i = 0; i < 4; i++)
    // {
    //     int start=0 , end=3;
    //     while (start<=end)
    //     {
    //         swap(arr[i][start] , arr[i][end]);
    //         start++;
    //         end--;
    //     }
        
    // }
    // for (int i = 0; i < 4; i++)
    //  {
    //      for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }  
    //  }

    //rotate matreix by 180 degree
    //column reverse
    // for (int j = 0; j < 4; j++)
    // {
    //     int start=0 , end=3;
    //     while (start<=end)
    //     {
    //         swap(arr[start][j] , arr[end][j]);
    //         start++;
    //         end--;
    //     }
        
    // }
    // //row reverse
    // for (int i = 0; i < 4; i++)
    // {
    //     int start=0 , end=3;
    //     while (start<=end)
    //     {
    //         swap(arr[i][start] , arr[i][end]);
    //         start++;
    //         end--;
    //     }
        
    // }
    // //print the matrix
    // for (int i = 0; i < 4; i++)
    //  {
    //      for (int j = 0; j < 4; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }  
    //  }


     //reverse matrix anticlockwise
     //row reverse
    for (int i = 0; i < 4; i++)
    {
        int start=0 , end=3;
        while (start<=end)
        {
            swap(arr[i][start] , arr[i][end]);
            start++;
            end--;
        }
        
    }
//transpose of matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 4; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }

    //print the matrix
    for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j < 4; j++)
        {
            cout<<arr[i][j]<<" ";
        }  
     }

    
    
}