#include<iostream>
using namespace std ;
int main(){
int num ;
cout<<"enter number : " ;
cin>>num;
for(int row = 1 ; row<=num ; row++){
    int value1 = 1 ;
    int value2 = row-1 ;
    for(int col=1;col<=num+(num-1);col++){
        if(col<=num-row){
            cout<<" ";
        }
        else if (col>num){
            if(value2==0){
                break;
            }
          cout<<value2;
          value2--;
        }
        else{
            cout<< value1;
            value1++;
        }
    }
    cout<<endl ;


}
}