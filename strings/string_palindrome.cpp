#include<iostream>
#include<string>
using namespace std  ;
int main (){

 string s= "kalpana" ;
 int start = 0 , end = s.size() - 1 ;

 while(start<end){
    if(s[start] != s[end]){
        cout<<"not palindrome" ;
        return 0;
    }
    start++ , end-- ;
 }

 cout<<" is palindrome " ;


}