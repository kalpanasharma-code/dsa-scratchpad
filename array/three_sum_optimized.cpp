#include<iostream>
#include<vector>
using namespace std ; 

 vector<int> three_sum(vector<int>arr , int sum){
       
    int n = arr.size() ;
    for(int i = 0 ; i<n-2 ; i++){
      int start = i+1  , end = n -1 ;
      int x = sum - arr[i] ;
      while(start < end ){
       if(arr[start] + arr[end] == x){
        return { i ,start , end } ;
       }
        
      else if(arr[start] + arr[end] > x)
        end -- ;

        else start ++ ;

      }

    }

 return {} ;

 }