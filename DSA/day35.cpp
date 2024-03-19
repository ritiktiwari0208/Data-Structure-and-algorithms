#include <iostream>
using namespace std;

int main(){
    int books[4]={12,34,67,90};
    int k=3;
    int start=0 , end=0 , mid , ans ;
    for (int i = 0; i < 4; i++)
    {
        if(start<books[i]){
            start=books[i];
        }
        end=end+books[i];
    }
    cout<<start<<" "<<end<<endl;
    if (k>4)
    {
        return -1;
    }
    
    while (start<=end)
    {
        mid=start+(end-start)/2;
        int count=1 , pages=0 ;
        for (int i = 0; i < 4; i++)
        {
            pages=pages+books[i];
            if (pages>mid)
            {
                count++;
                pages=books[i];
            }
            
        }
        if (count<=k)
        {
            ans=mid;
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        
        
    }
    cout<<ans;
    
    
}