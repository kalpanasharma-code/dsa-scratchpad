#include<iostream>
using namespace std ;
int main (){
 int number ;
 cout<<"enter number : " ;
 cin>> number ;
 int i = 1 ;
 while(i<=number){
    int j = 1 ;
    while ( j<=i){
      cout<<"* " ;
      j++ ;
    }
    cout<<endl ;
    i++ ;

 }


}