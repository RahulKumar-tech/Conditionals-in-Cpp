// Q) Given an integer. Print the absolute value of that integer.
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Enter an integer : ";
//     int n;
//     cin>>n;
//     if(n>0){       // n>=0 or n>0 both are same
//         cout<<n;
//     }
//     else{   // n<=0
//         cout<<-n;
//     }
// }

       // or 

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter an integer : ";
    int n;
    cin>>n;
    if(n<0){    
          n = -n; 
    }
    cout<<n;
}