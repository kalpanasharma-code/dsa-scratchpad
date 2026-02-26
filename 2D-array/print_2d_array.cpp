#include<iostream>
using namespace std ;
  
 void print (int arr[][5] , int row , int col ){
   for(int i = 0 ; i< row ; i++){
    for(int j = 0 ; j < col ; j++){
        cout<< arr[i][j]<< "  " ;
    }
    cout<<endl ;
   }



 }