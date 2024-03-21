// Q) Take positive integers input and tell if it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%5==0){
        cout<<"It is divisible by 5 "<<endl;
    }
    else{
        cout<<"It is not divisible by 5 ";
    }
}
