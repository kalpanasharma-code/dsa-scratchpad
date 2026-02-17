#include<iostream>
using namespace std ; 

 int min_time(int arr[] , int n , int p){
  int start = 0 , end = 0 , mid , ans = -1 , wall , count ;
  if(p>n)
  return ans ;
   for(int i = 0 ; i<n ; i++){
      start = max(start , arr[i]) ;
      end += arr[i] ;
   }
   
   while(start<=end){
    mid = start+(end - start) / 2 ;
     wall = 0 ; count = 1 ;
     for(int i = 0 ; i< n ;i++){
        wall+= arr[i] ;
        if(wall>mid){
            wall = arr[i];
            count++;
        }
     }

     if(count<= p){
        ans = mid ;
        end = mid - 1 ;
     }
     else start = mid + 1 ;
   }

 return ans ;



 }