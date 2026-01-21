#include<iostream>
using namespace std ;
int main (){
 int number ;
 cout<<"enter number : " ;
 cin>>number ;
 int count = 1 ;
 for (int row = 1 ; row <= number ;row++){
    for(int col = 1 ; col<= row ; col++){
        cout<< count << " " ;
        count++ ;
    }
    cout<<endl ;
 }


}