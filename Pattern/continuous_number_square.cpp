#include<iostream>
using namespace std ;
int main (){
    int number ;
    cout<<"enter number : " ;
    cin>> number ;
    int count = 1 ;
    for (int i = 1 ; i <= number ; i++){
        for (int j = 1 ; j<=number ; j++){
         cout<< count <<"  " ;
         count++ ;
        }
        cout<<endl ;
    }



}