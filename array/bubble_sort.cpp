#include<iostream>
#include<algorithm>
using namespace std ;

 void bubble_sort( int arr [] ,int n ){
    for( int i = n-2 ; i>= 0 ; i--){
        bool swapped = false ;
        for(int j = 0 ; j<=i ; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] ,arr[j+1]) ;
                swapped = true ;
            }
        }
        if(swapped == false)
        break ;
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
      
     bubble_sort( arr  , size) ;
     cout<<"your sorted array is : " ;

     for(int i = 0 ; i<size ;i++){
        cout<<arr[i]<<" " ;
     }





   }