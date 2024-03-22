 //Q) Take positive integers input and tell if it is a divisible by 5 or 3 and also divisbleby 5 or 3 not.
// Note:- if(condition 1 || condition 2) { 
    // code 
    //  }
    // if condition 1 is true then compiler or computer won't check for condition 2, because any one condition is true the other will be false.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    if(n%5==0 || n%3==0){
        cout<<"The number is Divisible by 5 or 3 ";
    }
    // if(n%15==0){
    //      cout<<"The number is Divisible by 5 and 3 ";
    // }
    else{
        cout<<"The number is not divisible by 5 and it is not divisible by 3 ";
    }
}
