#include<iostream>
using namespace std ;

 int search_position(int arr[] ,int n ,int target ){
   int start = 0 ; int end = n-1 ;
   while(start<=end){
    int mid = start + (end - start) / 2 ;
    if(arr[mid] == target ){
        return mid ;
    }
    else if (arr[mid]<target){
        start = mid + 1 ;
    }
    else end = mid - 1 ;   
     }

     return start ;

   }


   int main(){
     int arr[6] = { 4 , 8 , 10 , 24 , 28 , 70 };
     int num ;
     cout<<"enter number u want to insert : " ;
     cin>>num ;
     cout<<search_position( arr ,6 ,num) ;

   }






 