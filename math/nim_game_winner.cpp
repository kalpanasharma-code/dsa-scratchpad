#include<iostream>
#include <string>
using namespace std ;
int main(){
    int num ;
    string player1 , player2 ;
    cout<<"enter total number of stones " ;
    cin>> num ;
    cout<<endl<<"enter first player name : " ;
    cin>>player1 ;
    cout<<endl<<"enter second player name : " ;
    cin>>player2 ;
    if(num%4==0){
        cout<<endl<< player2<<" wins ." ;
    }
  else cout<<endl<<player1 <<" wins ." ;

};

//In the Nim game where players can remove 1–3 stones, positions that are multiples of 4 are losing positions. If the initial number of stones is divisible by 4, the second player wins; otherwise, the first player can force a win.
