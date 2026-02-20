#include<iostream>
#include<algorithm>
using namespace std ; 

  int min_speed(int arr[] , int n , int h ){
    int start = 0 , end = 0 , mid , ans = - 1 ; 
     long long sum  = 0 ;
     for(int i = 0 ; i < n ; i++){
        sum+= arr[i] ;
        end = max(end , arr[i]) ;
     }
      start = sum/h ;

      while(start<=end){
        if(!start)
        start = 1 ; 
       mid = start + (end - start) /2 ;
        int total_timing = 0 ; 
         for(int i = 0 ; i< n ;i++){
          total_timing += arr[i] / mid ;
          if(arr[i]% mid){
            total_timing++ ;
          }
         }

         if(total_timing > h){
          start = mid + 1 ;
         }
         
         else {
          ans = mid ;
          end = mid - 1 ;
         }


      }
     
     return ans ;



  }
