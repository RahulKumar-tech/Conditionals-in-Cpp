

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the character : ";
    char ch;
    cin>>ch;
   // Typecasting revised
   // cout<<(int)ch; --> a --> 97

   // a to z -> 97 to 122
   // A to z -> 65 to 90
   int ascii = (int)ch;
   if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
    cout<<"The character is an alphabet ";
   }
   else{
    cout<<" The character is not an alphabet";
   }
}