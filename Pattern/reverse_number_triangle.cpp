#include<iostream>
using namespace std ;
int main(){
   int num ;
   cout<<"enter number : " ;
   cin>> num ;
      for(int row = 1 ; row<=num ;row++){
         for(int col=row ; col>=1 ; col--){
            cout<<col<<" " ; // row-col+1 ->another way .
         }
         cout<<endl ;


      }

    





}