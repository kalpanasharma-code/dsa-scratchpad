#include<iostream>
#include<string>
#include<vector>
using namespace std ;

int main(){
  
    string s = "is2 This1 Kalpana3" ;
    int index = 0 ;
    string temp ;
    vector<string> ans(10) ;

    while(index < s.size()){
        if(s[index] == ' '){
            int pos = temp[temp.size() - 1] - '0'; 
            ans[pos] = temp ;
            temp.clear();
            index++;
        }
        else{
            temp += s[index];
            index++;
        }
    }

    int pos = temp[temp.size() - 1] - '0';
    ans[pos] = temp;

    temp.clear();

    for(int i = 1; i < 10; i++){
        if(ans[i] != ""){
            temp += ans[i];
            temp += ' ';
        }
    }

    temp.pop_back();

    cout << "answer is : " << temp;

    return 0;
}