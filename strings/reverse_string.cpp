#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main (){

 string s = "kalpana" ;
 int end = s.size() - 1 ;
 int start = 0 ; 
 while(start<end){
    swap(s[start] ,s[end]);
    start++ ,end-- ;
 }

cout<< s ;


}