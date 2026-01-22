#include<iostream>
using namespace std ;
int main (){
  int num ;
  cout<<"enter number : " ;
  cin>>num ;
  for(int row = 1 ; row<= num ; row++){
     char ch = 'A' + row - 1 ;
    for(int col = 1 ; col<= num ; col++){
       
        cout<< ch <<"  " ;
        ch++ ;
    }
    cout<<endl ;
  }




}