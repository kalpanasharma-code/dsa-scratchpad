/*You are given an integer n. Your task is to compute the GCD (greatest common divisor) of two values:
sumOdd: the sum of the first n odd numbers.
sumEven: the sum of the first n even numbers.
Return the GCD of sumOdd and sumEven.*/
#include<iostream>
#include <algorithm>
using namespace std;
  class solution {
    public :
     int GCD(int num){
        
        int sumeven = 0 ;
        int sumodd = 0 ;
        for(int i = 1 ; i<=num;i++){
            sumeven = sumeven + 2*i ;
            sumodd = sumodd + (2*i-1) ;
        }
        int key = min(sumeven,sumodd);
        int gcd = 1;
        for(int i = 1 ; i<=key ;i++){
            if(sumeven % i == 0 && sumodd % i == 0 ){
                    gcd = i ;
            }
        }
        return gcd ;
     }
  } ;

  int main (){
    int number ; 
    cout<<"enter number : ";
    cin>> number ; 
    solution sol ; 
    int result = sol.GCD(number) ;
    cout<<endl<<result ;
  }

