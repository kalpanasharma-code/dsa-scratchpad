#include<iostream>
#include<string>
#include<vector>
using namespace std ; 

int main (){

 string s = "aklpogbscdewwwqklp" ;
  vector<int>alpha(26 , 0) ;
   string ans ;

 // sort string 
 for(int i = 0 ; i <s.size() ;i++){
    int index = s[i] - 'a' ;
    alpha[index] ++ ;
 }
 
 for(int i = 0 ; i < 26 ; i++){
    while(alpha[i]){
        char ch = i+ 'a' ;
        ans +=  ch ;
        alpha[i] -- ;
    }
 

 }

  cout<<ans ;


}