//Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
//You must not use any built-in exponent function or operator.
//For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
#include <iostream>
using namespace std;            
class Solution{
 public :
    int sqrt(int x){
        for(int i = 1 ;i<=x; i++){
           if(i==x/i){
            return i ;
           }
           else if (i>x/i){
            return i- 1;
           }
        }
        return 0 ; 
    } ;
};

int main(){
    int num ;
    cout<<"enter number : " ;
    cin>> num ;
    Solution sol ;
    int result = sol.sqrt(num) ;
    cout<<endl << result  ;

}