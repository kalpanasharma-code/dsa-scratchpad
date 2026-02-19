#include<iostream>
#include<algorithm>
using namespace std ;
  int max_distance(int arr[] , int n , int k ){
    sort(arr, arr + n);
    int start = 1 , end = arr[n-1] - arr[0]  , ans = - 1 , mid ;
     while(start<=end ){
      mid = start + (end - start)/ 2 ;
      int position = arr[0] , count = 1 ;
     for(int i = 1 ; i < n ; i++){
         if(position+mid <= arr[i] ){
        position = arr[i];
        count++ ;
      }

     }
   
     if(count < k){
        end = mid - 1 ; 
     }
     else {
        ans = mid ;
        start = mid + 1 ;
     }


     }

return ans ;

  }