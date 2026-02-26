#include<iostream>
#include<climits>
using namespace std ; 

int main (){
   int arr[3][4] = {1 , 2 , 67 , 89, 90 , 45 , 23 , 45 , 12 , 3 , 4 , 6} ;
    int maxi = INT_MIN ;
    int index = - 1;
   for(int i = 0 ; i < 3 ; i++){
     int sum = 0 ;
    for(int j = 0 ; j < 4 ; j++){
        sum+= arr[i][j] ;
    }
    if(sum>maxi){
        maxi = sum ;
        index = i ;
    }
}


cout << "maximum sum is " <<maxi <<" and index is "<< index ;




}