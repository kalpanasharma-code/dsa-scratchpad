// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

#include<iostream>
#include <climits>
using namespace std ;
 class Solution {
    public:
    int reverse (int num ){
        int newnum = 0 ;
        while(num){
          int digit = num% 10 ;                      //INT_MAX =  2147483647 ,INT_MIN = -2147483648 range

        // Overflow check
            if (newnum > INT_MAX / 10 || 
               (newnum == INT_MAX / 10 && digit > 7))
                return 0;

            if (newnum < INT_MIN / 10 || 
               (newnum == INT_MIN / 10 && digit < -8))
                return 0;
          
          newnum = newnum*10 + digit ;
          num = num/10 ;
        }
        return newnum ;
    }
 } ;

 int main (){
    int number ; 
    Solution sol ;
    cout <<"enter a number : " ;
    cin>> number ;
    int result = sol.reverse(number);
    cout<<endl<<result ;

 }