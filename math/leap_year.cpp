#include<iostream>
using namespace std ;
class Solution{
  public:
    bool isLeap(int year ) {
      if(year%400==0){
        return true ;
      }
      else if (year%4 == 0 && year%100!= 0){
        return true ;
      }
      else  return false ;
    }

};

int main (){
   int year ;
   cout<<"enter year : " ;
   cin>>year ;
   Solution object ;
   bool result = object.isLeap(year) ;
   if (result)
   cout<<"leap year " ;
   else cout<<"not a leap year " ;




}