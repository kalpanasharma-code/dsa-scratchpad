// Given an integer number n, return the difference between the product of its digits and the sum of its digits.
#include <iostream>
using namespace std ; 
class Solution {
    public: 
    
    int diff(int num ){
        int digit = 0 ;
        int sum = 0 ;
        int product = 1 ;
          while(num){
            digit = num%10 ;
            sum = sum + digit ;
            product = product * digit ;
            num = num/10 ;
          }
          return product - sum ; 
    }
} ;

int main (){
    int number ;
    cout<<"enter a number : " ;
    cin>> number ;
    Solution sol ;
    int result = sol.diff(number);
    cout<<endl<< result ; 
}