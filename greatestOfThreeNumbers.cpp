// Q) Take 3 positive integers input and print the greatest of them.
//  Algorithm :- a,b,c three numbers then check if (a>b && a>c) --> a is largest and similarily both will be done with b and c. 
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<"Enter 3rd number : ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<" is largest";
    }
    if(b>a && b>c){
        cout<<b<<" is largest";
    }
    if(c>a && c>b){
        cout<<c<<" is largest";
    }
}