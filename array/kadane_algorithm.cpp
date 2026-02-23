#include<iostream>
#include<climits>
using namespace std ; 
 
int max_sum_subarray(int arr[] , int n ){
   int maxi = INT_MIN  , prefix = 0 ;

   for(int i = 0 ; i< n; i++){
      prefix += arr[i] ;
      maxi = max(prefix , maxi) ;
      if(prefix<0){
        prefix = 0 ;
      }
   }

  return maxi ;

}