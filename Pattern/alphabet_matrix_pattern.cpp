#include <iostream>
using namespace std ;
int main (){
 int num ;
 cout<<"enter number : " ;
 cin>>num ;
 for (int row = 1 ; row<= num ;row++){
    for(int col = 1 ; col<=num; col++){
        char ch = 'A'+ col -1 ;
        cout<<ch<<" ";
    }
    cout<<endl ;
 }

}