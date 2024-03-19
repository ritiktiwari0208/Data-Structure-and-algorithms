#include<iostream>
using namespace std;

int main(){
    // int arr[5]={3,5,7,4,1};
    // int *ptr=arr;
    // //print address of 0th index
    // cout<<arr<<endl;
    // cout<<&arr[0]<<endl;
    // cout<<ptr<<endl;

    // //print address of 1th index
    // cout<<arr+1<<endl;
    // cout<<&arr[1]<<endl;
    
    // //print value at 0th index
    // cout<<*arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<*ptr<<endl;

    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<arr+i<<endl;
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<*(arr+i)<<endl;
    // }

    char name='1';
    char *ptr=&name;
    cout<<ptr<<endl;

    char arr[5]={"1234"};
    char *ptr1 = arr;
    cout<<ptr1<<endl;
    cout<<arr<<endl;

    cout<<(void*)ptr1<<endl;
    cout<<(void*)arr;

}