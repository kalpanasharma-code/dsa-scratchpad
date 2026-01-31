#include<iostream>
using namespace std ;
  void selection_sort(int arr[] , int size ){
    
    for(int i = 0 ; i<size-1 ; i++){
        int min = arr[i] ;
        int index = i ;
        for(int j = i+1 ; j<size ;j++ ){
           if(arr[j]< min){
            min = arr[j] ;
            index = j ;  
           }
           
        }
        swap(arr[i] ,arr[index]) ;
    }

    }