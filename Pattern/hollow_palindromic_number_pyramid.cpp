#include<iostream>
using namespace std ;
int main(){
int num ;
cout<<"enter number : " ;
cin>>num ;
for(int row = 1 ; row<=num ; row++){
// 1st triangle 
for(int col = 1 ; col<=num-row+1;col++){
    cout<<col<<" ";
}

//2nd triangle 
for(int col2 = 1 ;col2<=row-1;col2++){
    cout<<"*"<<" " ;
}

//3rd traingle 
for(int col3 = 1 ;col3<=row-1;col3++){
    cout<<"*"<<" ";
}

//4th triangle 
for(int col4=num-row+1 ;col4>=1;col4--){
    cout<<col4<<" ";
}
cout<<endl;

}






}