#include<iostream>
using namespace std ; 

int main (){
  int arr1[3][4] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 ,9 , 10 , 11 , 12 } ;
  int arr2[3][4] = {12 , 11 , 10 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 ,1 } ;
   int sum[3][4] ;

   for(int i = 0 ; i < 3 ; i++ ){
    for(int j = 0 ; j < 4 ; j++){
        sum[i][j] = arr1[i][j] + arr2[i][j] ;
    }
   }


   // Print result
  for(int i = 0 ; i < 3 ; i++ ){
    for(int j = 0 ; j < 4 ; j++){
        cout << sum[i][j] << " ";
    }
    cout << endl;
  }

  return 0;


}