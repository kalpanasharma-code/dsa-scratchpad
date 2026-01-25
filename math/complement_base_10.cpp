#include<iostream>
using namespace std ;
int main (){
    int num ; 
    cout<<"enter number : " ;
    cin>>num;
    if(num == 0 ){
        cout<< 1 ;
        return 0 ;
    }
    int ans = 0 ;
    int place = 1 ;
    while(num){
     int digit = num%2 ;
     digit = digit^1 ;
     ans = ans+digit*place ;
     place = place *2 ;
     num = num/2 ;
}
cout<< "your complement number is : " <<ans ;
return 0 ;





}