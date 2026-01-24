// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

#include<iostream>
using namespace std;
class Solution {
 public:
     bool check(int num ){
        if(num<1) 
        return 0 ;
       while(num!=1){
        if(num%2==1)
        return 0 ;
        num = num/2 ;
       }
       return 1 ;
     }

};

int main (){
    int num ; 
    cout<<"enter number ";
    cin>> num ;
    Solution obj ;
    bool result = obj.check(num);
    cout<< endl <<  result ;
}