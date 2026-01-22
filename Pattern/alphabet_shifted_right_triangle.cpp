#include<iostream>
using namespace std ;
int main (){
int num ; 
cout<<"enter number : " ;
cin>>num ;
for (int row = 1 ; row<=num ; row++){
     char ch = 'A'+row-1 ;
    for(int col = 1 ; col<=row ; col++){
       cout<<ch<<" " ;
       ch++;     // another method -> cout<< char ('A' + row + col -2) <<" " ;
    }
    cout<<endl ;
}




}