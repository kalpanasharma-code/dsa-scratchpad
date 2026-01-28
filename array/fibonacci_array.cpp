#include<iostream>
using namespace std ;
int fibonaaci( int size ){
    int arr[1000] ;
    arr[0] = 0 ;
    arr[1] = 1 ;
    for (int i = 2 ; i<size;i++ ){
        arr[i]= arr[i-1]+arr[i-2] ;
    }
    return arr[size-1] ;

}
 int main(){
      int num ;
      cout<<"enter number : " ;
      cin>>num;
      cout<<endl<<"Your "<<num<<" element of array is "<<fibonaaci(num) ;





 }