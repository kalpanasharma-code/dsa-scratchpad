#include<iostream>
using namespace std ;
int main(){
int num ;
cout<<"enter number : " ;
cin>>num ;
int previous  = 0 ;
int current = 1 ;
for(int i = 1 ; i<=num ;i++){
    int next = current + previous ;
    cout<<previous<<" " ;
    previous = current ;
    current = next ;
}






}