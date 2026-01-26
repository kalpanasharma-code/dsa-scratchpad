#include<iostream>
using namespace std ;
 char convert(char name ){
    
    return name -'a' +'A' ;
 }

int main (){
    char ch  ;
    cout<<"enter character : " ;
    cin>>ch ;
    if(ch <'a'|| ch>'z'){
        cout<<"enter valid input " ;
        return 0 ;
    }
    cout<<convert(ch) ;
    return 0 ;
}