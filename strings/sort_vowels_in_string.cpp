#include<iostream>
#include<vector>
#include<string>
using namespace std ; 

int main(){

 vector<int> lower(26 , 0) , upper(26 , 0);
 string s = "lEetcOde"; 

 // count vowels
 for(int i = 0 ; i < s.size() ; i++){

    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        lower[s[i]-'a']++;
        s[i]='#';
    }

    if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        upper[s[i]-'A']++;
        s[i]='#';
    }
 }

 string ans;

 // uppercase vowels
 for(int i = 0 ; i < 26 ; i++){
    while(upper[i] > 0){
        ans += i + 'A';
        upper[i]--;
    }
 }

 // lowercase vowels
 for(int i = 0 ; i < 26 ; i++){
    while(lower[i] > 0){
        ans += i + 'a';
        lower[i]--;
    }
 }

 int index = 0;

 for(int i = 0 ; i < s.size() ; i++){
    if(s[i] == '#'){
        s[i] = ans[index];
        index++;
    }
 }

 cout << s;
}