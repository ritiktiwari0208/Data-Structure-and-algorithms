
#include <iostream>
#include<vector>
using namespace std;

int main(){
    /*//create vector
    vector<int>v;
    //size and capacity same
    vector<int>v1(5,1);
    

    //size and capcity
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    //add value in vector
    v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(9);
    v.push_back(7);
    v.push_back(8);
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;

    //update value 
    v[1]=5;
    //delete from vector
    v.pop_back();
    cout<<"size of v: "<<v.size()<<endl;
    cout<<"capacity of v: "<<v.capacity()<<endl;
    v.erase(v.begin()+2);

    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    v.insert(v.begin()+1 , 12);
    for (int i = 0; i < v.size(); i++)
    {
       cout<<v[i]<<" ";
    }
    cout<<endl;
    //v.clear();
    //cout<<"size of v: "<<v.size()<<endl;
    //cout<<"capacity of v: "<<v.capacity()<<endl;

    //print first and last element
    cout<<v.front()<<endl;
    cout<<v[0]<<endl;;
    cout<<v[v.size()-1]<<endl;
    cout<<v.back()<<endl;
    

    //copy value of one vector to other
    vector<int> arr;
    arr=v;
    cout<<arr.size()<<endl;

    
     for(auto it=arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";
     }
     cout<<endl;
     for(auto i:arr){
        cout<<i<<" ";
     }
     cout<<endl;

     //sort an array increasing
     sort(arr.begin(),arr.end());
     for(auto i:arr){
        cout<<i<<" ";
     }
     cout<<endl;
     // decreasing
     //sort(arr.begin(),arr.end() , greater<int>());
     //sort(arr.rbegin(),arr.rend());
     //for(auto i:arr){
       // cout<<i<<" ";
     //}
     

     //binary search
     cout<<binary_search(arr.begin(),arr.end(),54)<<endl;
     cout<<find(arr.begin(),arr.end(),54)<<endl;*/

     //count
     vector<int>v;
     v.push_back(3);
    v.push_back(6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(7);
    v.push_back(6);
     int value=count(v.begin(),v.end(),6);
     cout<<value<<endl;

     //minimum or maximum
     int ans1=max_element(v.begin(),v.end());
     int ans2=min_element(v.begin(),v.end());
     cout<<ans1<<endl;
     cout<<ans2<<endl;



}