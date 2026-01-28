#include<iostream>
using namespace std ;
int missing(int arr[] ,int size){
    int sum = size*(size+1)/2 ;
    int ans = 0 ;

    for(int i = 0 ; i<size;i++){
        ans = ans + arr[i] ;
    }

    return sum- ans ;



}

  int main(){
    int arr[] = { 1 , 3 , 4 ,0} ;
    int size= sizeof(arr)/sizeof(arr[0]) ;
    cout<< missing(arr ,size) ;


  }