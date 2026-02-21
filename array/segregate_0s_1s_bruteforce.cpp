// Approach 1: Count and overwrite method
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
using namespace std ;  
 
 void segregation(int arr[] , int n){
    int count0 = 0  , count1 = 0 ;
     for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0 ){
            count0++ ;
        }
        else count1++ ;
     }
  
     for(int i = 0 ; i <count0 ; i++){
        arr[i] = 0 ;
     }

     for(int i = count0 ; i< n ; i++){
        arr[i] = 1 ;
     }

 }