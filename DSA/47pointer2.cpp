#include<iostream>
using namespace std;
// 20      10 //value
// first   second //variable name
// 500     1000 // address 


// 500     1000 //value
// p1      p2 //variable name
// 10      21 // address

//pass by pointer
// void swap(int *p1 , int *p2){
//     int temp=*p1;
//     *p1=*p2;
//     *p2=temp;
//     cout<<p1<<endl;
//     cout<<p2<<endl;
//     cout<<&p1<<endl;
//     cout<<&p1<<endl;


// }


//pass by refrence
void swapping(int &p1 , int &p2){
    int temp =p1;
    p1=p2;
    p2=temp;
}

int main(){
    int first=10 , second=20;
    // swap(&first , &second);
    swapping(first , second);
    cout<<first<<" "<<second;
}