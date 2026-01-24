#include<iostream>
using namespace std ;
int main(){
int num ;
cout<<"enter num : " ;
cin>>num;
int ans = 0 ;
int place = 1 ;
while(num!=0){
 int bit = num%2 ;
 ans  = ans+(bit*place);
 num = num/2;
 place = place*10;
}
cout<<"binary is : " << ans;




}