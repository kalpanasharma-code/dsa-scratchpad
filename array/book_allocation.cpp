#include<iostream>
using namespace std ;
  
  int min_pages(int arr[] , int n , int k ){
    if(k>n)
    return -1 ;
      int start = 0 , end = 0 , mid ,ans = -1 ;
      for(int i = 0 ; i<n ; i++){
        start = max(start ,arr[i] ) ;
        end += arr[i] ;
      }
      while(start<=end){
       mid = start+(end - start)/2 ;
       int page = 0 , count = 1 ;
       for(int i = 0 ; i<n ; i++){
        page += arr[i] ;
        if(page>mid){
            page = arr[i] ;
            count++ ;
        }
       }
       if(count<=k){
        ans = mid ;
        end = mid - 1 ;
       }
       else start = mid + 1 ;

      }
      return ans ;

  }