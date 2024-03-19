#include<iostream>
using namespace std;

// print by function
void print(int arr[][3] , int row , int col){
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout<<arr[i][j]<<" ";
        }
        
    }

}

void printrow(int arr[][3] , int row , int col){
    int sum=INT_MIN , index=-1;
    for (int i = 0; i < 4; i++)
    {
        int total=0;
        for (int j = 0; j < 3; j++)
        {
           total+=arr[i][j];
           if (sum<total)
           {
            sum=total;
            index=i;
           }    
        }
        
    }
    cout<<indexk<<endl;
}

int main(){
    int arr1[4][3]={4,6,2,14,34,23,22,1,16,12,10,11};
    int arr2[4][3]={4,6,2,14,34,23,22,1,16,12,10,11};
    int arr[4][3];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout<<arr1[i][j]<<" ";
        }
        
    }
    cout<<endl;

    //function call here
    print(arr1 ,4,3);
    cout<<endl;

    //search an element
    int x=6;
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        if (arr[i][j])
    //        {
    //         cout<<"Yes"<<endl;
    //         return 0;
    //        }
    //     }
        
    // }
    

    //add two matrix
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=arr1[i][j]+arr2[i][j];
            
        }
        
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            
            cout<<arr[i][j]<<" ";
        }
        
    }
    cout<<endl;

    printrow(arr1 , 4 ,3);
    

}