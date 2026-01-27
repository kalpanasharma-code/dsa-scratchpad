// Problem: Find Minimum and Maximum in an Array
// Time Complexity: O(n)
// Space Complexity: O(1)

#include<iostream>
#include<climits>
using namespace std ;
  int max(int array [] , int size){
     int max = INT_MIN ;
     for(int i = 0 ; i<size ;i++){
        if(max<array[i]){
         max = array[i] ;
        }
     }
     return max ;

  }

  int min (int array[] , int size){
    int min = INT_MAX ;
    for(int i = 0 ; i<size;i++){
        if(min>array[i]){
            min = array[i] ;
        }
    }
    return min ;
  }

  int main(){
  int arr[]= { 2 ,89 , 78905 , 6790 , 78 , 234 , 0 ,-123 , 45678} ;
  int size = sizeof(arr) /sizeof(arr[0]) ;
  cout<<min(arr,size) ;
  cout<<endl<<max(arr,size ) ;



  }