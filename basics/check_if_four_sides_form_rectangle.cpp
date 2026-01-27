#include<iostream>
using namespace std ;
int main(){
  int num1 , num2 , num3,num4 ;
  cout<<"enter numbers : " ;
  cin>> num1 ;
  cin>>  num2 ;
  cin>> num3 ;
  cin>>  num4 ;
  if(num1 == num2 && num3== num4 || num1 == num3&&num2 ==num4 || num1 ==num4 && num2 == num3) {
    cout<<"yes it can form rectangle " ;
  }
  else cout<<"it can't form a rectangle " ;


}