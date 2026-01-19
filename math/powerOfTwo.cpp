// Given an integer n, return true if it is a power of two. Otherwise, return false.
// An integer n is a power of two, if there exists an integer x such that n == 2x.

#include<iostream>
using namespace std;
class Solution {
 public:
     bool check(int num ){
        if((num & (num-1))== 0){
             return true ;
        }
        return false ;
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