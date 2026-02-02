#include<iostream>
#include<algorithm>
using namespace std ;

  void insertion_sort(int arr[] , int n ){
    for(int i = 1 ; i < n ;i++){
        for(int j = i ; j>0 ;j--){
            if(arr[j]<arr[j-1])
            swap(arr[j] ,arr[j-1]) ;
            else break ;
        }
    }

  }

  int main(){
    int arr[1000] ;
    int size ;
    cout<<"enter size of array : " ;
    cin>>size ;
    for(int i = 0 ; i< size ; i++){
        cout<<"enter "<<i+1 <<" element : " ;
        cin>>arr[i];
        cout<<endl ;
    }
      
     insertion_sort( arr  , size) ;
     cout<<"your sorted array is : " ;

     for(int i = 0 ; i<size ;i++){
        cout<<arr[i]<<" " ;
     }





   }