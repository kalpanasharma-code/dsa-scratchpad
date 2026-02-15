#include<iostream>
using namespace std ;
  int kth_element(int arr[] , int n , int k ){
   int start = 0 ;
   int end = n-1 ;
   int ans = n ;
   while(start<=end){
     int mid = start + (end - start ) / 2 ; 
     int missing = arr[mid]-(mid+1) ;
     if(missing>=k){
        ans = mid ;
        end = mid - 1 ;
     }
     else {
        start = mid + 1 ;
     }
   }
   return ans+k ;

  }