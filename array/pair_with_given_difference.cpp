#include<iostream>
using namespace std ; 
 
bool check (int arr[] , int n , int diff){
  int start = 0 , end = 1 ;

  while(end<n){
     if(arr[end] - arr[start] == diff){
        return true ;
     }

     else if(arr[end] - arr[start] > diff){
         start++ ;
     }

     else {
       end++ ;
     }
  
     if(start == end){
        end++ ;
     }


  }
  return false ;

}