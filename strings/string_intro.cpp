#include<iostream>
#include<string>
using namespace std ;

int main(){
  // charcater array 

   char arr1[] = {'a' , 'b', '#'} ; // problem with this is that we can acess it using for loop and suppose we gave it size of 10 . user only entered 3-4 characters then it will give error .
    
// it's better version then previous as it automatically fill empty space with null character /0 .but still we have to give size beforehand .
  char arr[20];
  cin>>arr;
  cout<<arr ;
 
  // this is better then previous one as it gives space dynamically . 
 string s = "kalpana sharma "; // i have given space here in between words and it's totally valid as in ascii we have it for space as well 
 cout<< s ; 

 // but when we do cin>> . we can't give space in between as cin>> read input upto space , tab , enter . so it will not read input after space . so we have it's solution that is getline . it will take space and tab and tsill read , it will stop on enter .
  
 string k ;
 getline(cin , k) ; // now it will accept input from user with spaces .

 // escape sequence "\" is used to nullify special meaning of charcters . it will not get printed but print anything after it as it is . no matter if it have a special meaning or not .


 string l = " i m a \"good\" girl "; 

 // operation + . it will add two strings . 
 string s1 = "rohit" ;
  string s2 = "mohit" ;
  string s3 = s1+s2 ;
  cout<<s3 ;


// charcters and other string : 

s3 = s2 + 'p' ;
s3 = s1 + "anything " ;
 
l.push_back('k');



}