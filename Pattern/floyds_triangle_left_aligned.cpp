#include<iostream>
using namespace std ;
int main (){
int num ;
cout<<"enter number : " ;
cin>>num ;
int value = 1 ;
for(int row = 1 ; row<=num ; row++){
    for(int col = 1 ; col<=num ;col++){
          if(col<=num-row){
            cout<<" ";
          }
          else{
           cout<<value ;
            value++;
          } 
         
    }
    cout<<endl ;
}









}