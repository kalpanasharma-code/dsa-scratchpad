#include<iostream>
using namespace std ; 

int main(){
  int arr[4][4] = {0} ;
  int sum = 0 ;
  int n = 4;

  for(int i = 0 ; i < n ; i++){
    sum += arr[i][i];                 // principal
    sum += arr[i][n - i - 1];         // secondary
  }

  // If n is odd, subtract middle element once
  if(n % 2 == 1){
      sum -= arr[n/2][n/2];
  }

  cout << sum ;
}