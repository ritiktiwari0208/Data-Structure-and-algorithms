#include <iostream>
using namespace std;

int main(){
    //int a[5]={4,2,3,6,1};
    int a[1000];
    int n;
    cout<<"Enter array size less than than 1000: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for (int i = 0; i < n; i++)
    {
    cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        int index=i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[index])
            {
                index=j;
            }
            swap(a[index],a[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    
    
}
    