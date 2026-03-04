#include<iostream>
#include<string>
#include<vector>
using namespace std ; 
int main (){
  string s = " this is kalpana i have abcdefghijklmnopqrstuvwxyz" ;
  vector<bool>alpha(26 , 0) ;
   for(int i = 0 ; i< s.size() ; i++){
     int index = s[i] - 'a' ;
     alpha[index] = 1 ;
   }
 
   for(int i = 0 ; i<26 ; i++){
    if(alpha[i]== 0){
        cout<<"not a pangram " ;
        return 0 ;
    }
   }

   cout <<"is pangram " ;
   return 1 ;




}

