#include<iostream>
using namespace std ;
void rotate(int arr[] , int size){
  int temp = arr[size-1];
  for(int i = size-1 ; i>0 ;i--){
       arr[i]=arr[i-1] ;
  }
  arr[0] = temp ;

}
int main(){
    int arr[] ={ 0 , 9 , 89 , 67 , 90 } ;
    int size = sizeof(arr)/sizeof(arr[0]) ;
     rotate(arr,size) ;
     for(int i = 0 ; i<size;i++){
         cout<<arr[i]<<" " ;
     }






}