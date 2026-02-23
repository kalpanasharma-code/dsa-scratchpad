#include<iostream>
using namespace std ; 
 
int sub_array(int arr[] , int n ){
    int prefix = 0  , sum = 0; 
    for(int i = 0 ; i< n ; i++){
        sum += arr[i] ;
    }

    for(int i = 0 ; i< n -1;i++){
      prefix += arr[i] ;
      if(sum - prefix == prefix){
        return i ;
      }

    }
  
    return -1 ;

}