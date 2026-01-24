// Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.
#include<iostream>
using namespace std ;
class Solution {
     public:
     int sumdigits(int num){
        if(num<10)
        return num ;
        int sum = 0 ;
        while(num){
          int digit = num%10;
          sum = sum + digit ;
          num = num/10 ;
        }
        if(sum<10)
        return sum ;
     
        return sumdigits(sum) ;
     }

} ;

 int main(){
        
        int num ;
        cout<<"enter number : " ;
        cin>>num ;
         Solution object ; 
         int result = object.sumdigits(num) ;
         cout<<result ;

        return 0 ; 
     }