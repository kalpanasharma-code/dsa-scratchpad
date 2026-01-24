#include<iostream>
using namespace std ;
int main(){
   int num ;
   int ans = 0 ;
   int place = 1 ;
   cout<<"enter decimal number : ";
   cin>>num ;
   while (num){
    int digit = num%8 ;
    num/=8 ;
    ans = digit*place + ans ;
    place*=10 ;
    }
    cout<<"your octal number is :"<<ans ;



}