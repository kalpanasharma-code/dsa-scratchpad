#include<iostream>
#include<vector>
#include<string>
#include<climits>
using namespace std ; 
 
int main(){
   string s = "AABBBCBBAC" ;
   vector<int>count(256 , 0 ) ;
   int diff = 0 , len = s.size() ,first = 0 , second = 0 ; 
   
   // count total diff characters 
   for(int i = 0 ; i < s.size() ; i++ ){
     if(count[s[i]] == 0)   // FIXED
        diff++ ;
     count[s[i]] ++ ;
   }
   
  // setting count 0 again 
  for(int i = 0 ; i < 256 ; i++){
    count[i] = 0 ;
  }

  // checking for smallest distinct window 
  while(second < s.size()){

    // expand window
    if(count[s[second]] == 0){
        diff--;
    }
    count[s[second]]++;
    second++;

    // shrink window
    while(diff == 0){
        len = min(len , second - first);

        count[s[first]] -- ;
        if(count[s[first]] == 0 ){
            diff++;
        }
        first++ ;
    }
  }

  cout << "smallest distinct window is : "<< len ;
}