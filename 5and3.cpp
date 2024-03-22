// Q) Take positive integers input and tell if it is a dividibl by 5 and 3 both or not.
// Note:- if(condition 1 && condition 2) { 
    // code 
    //  }
    // if condition 1 is false then compiler or computer won't check for condition 2.

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    // without '&&' we can solve this like below too.
    // if(n%5==0 && n%3==0){
    //     cout<<"The number is Divisible by 5 and 3 ";
    // }
    if(n%15==0){
         cout<<"The number is Divisible by 5 and 3 ";
    }
    else{
        cout<<"The number is not divisible by 5 and 3 ";
    }
}
