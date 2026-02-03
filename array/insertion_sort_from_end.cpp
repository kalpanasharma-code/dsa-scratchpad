#include<iostream>
using namespace std ; 
 
 void insertion_sort(int arr[] ,int n ){
   for(int i= n-2  ; i>= 0; i--){
    for(int j = i ;j<n-1;j++ ){
      if(arr[j]>arr[j+1])
      swap(arr[j] ,arr[j+1]) ;
      else break ;
    }
   }

 }

//  This is insertion sort applied from the right side.
// The right portion of the array is assumed to be sorted.
// Each element from the left is inserted into its correct position in the sorted right part using adjacent swaps.