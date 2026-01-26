#include<iostream>
using namespace std ;
    int trailing_zeroes(int num ){
       if (num < 5)
        return 0;

       return num/5+trailing_zeroes( num /5) ;
   
  }
int main (){
     int num ;
     cout<<"enter number : " ;
     cin>> num ;
     cout<<"trailing zeroes are : " << trailing_zeroes( num ) ;
     return 0 ;
}