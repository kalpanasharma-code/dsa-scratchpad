#include<iostream>
using namespace std ;
int main (){
 int num ;
 cout<<"enter number : " ;
 cin>> num ;
 char ch = 'A';
 for (int row = 1 ; row<= num ; row++){
    for(int col = 1 ; col<=row ; col++){
        cout<<ch<<" ";
        ch++;
    }
    cout<<endl ;
 }






}