#include<iostream>
#include<algorithm>
using namespace std ;

  int min_weight(int arr[] , int n , int days ){
    int start = 0 , end = 0 , mid , ans = - 1 ;
     for(int i = 0 ; i < n ; i++){
        start = max(start , arr[i]) ;
        end += arr[i] ;
     }

     while(start<=end ){
         mid = start + (end - start)/2;
          int count = 1 , weight = 0 ;
          for(int i = 0 ; i < n ; i++){
            weight += arr[i] ;
            if( weight > mid){
                weight = arr[i] ;
                count++ ;
            }
          }

        if(count <= days){
    ans = mid;
    end = mid - 1;   // move left to find smaller valid capacity
     }
       else{
    start = mid + 1; // need bigger capacity
}

          return ans ;
  }
