#include<iostream>
using namespace std ;
int main(){
 int number ;
 cout<<"enter number : " ;
 cin>> number ;
 char ch = 'A' ;
 for ( int row = 1 ; row <= number ; row++){
     for(int col = 1 ; col<=number ; col++){
          cout<<ch << "  " ;  // another method ->
            // cout<< char ('A' + row -1) << " " ;
     }
     ch++ ;
     cout<<endl ;


 }






}