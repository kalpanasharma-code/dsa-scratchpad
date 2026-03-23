#include<iostream>
#include<string>
#include<vector>
using namespace std ; 

int main (){
  string s = "AABBBCBBACAA" ;
  int pre = 0 , suf  = 1 ; 
  vector<int > lps (s.size() , 0) ;
    
  while ( suf < s.size()){
     if(s[pre] == s[suf] ){
         lps[suf] = pre + 1 ;
         pre++;            
         suf++;            
     }

     else {
        if(pre == 0){
            lps[suf] = 0 ; 
            suf ++ ;
        }
    
        else {
            pre = lps[pre -1 ];  
        }
     }
  }

  cout<< "lps is : " << lps[s.size() - 1 ] ;
}