#include<iostream>
#include<vector>
using namespace std ;

int main (){
   
    // create , declare vector 

    vector<int> v ;

    // size and capacity 
   cout<<v.size() <<endl ;
   cout <<v.capacity()<<endl ;

   // insert elements 

   v.push_back(7) ;

   // size and capacity 
   cout<<v.size() <<endl ;
   cout <<v.capacity()<<endl ;

    // insert elements 

   v.push_back(7) ;

   // size and capacity 
   cout<<v.size() <<endl ;
   cout <<v.capacity()<<endl ;


    // insert elements 

   v.push_back(7) ;

   // size and capacity 
   cout<<v.size() <<endl ;
   cout <<v.capacity()<<endl ;

   // update value 
   v[1] = 5 ;

   // intialize vector with some vale 

   vector<int>a(5 , 2 ) ; // here 5 is it's size and it's intalized with 2 . every index is having value 2 .
  
//    vector<int>v1 = { 6  , 7 , 9 } ;

  // delete from vector 
   a.pop_back() ;  // it will delete from end 

   // delete from between 
  
   a.erase(a.begin() + 2 ) ; // here 2 is index i want to delte from 

   // print values 

   for(int i = 0 ; i<a.size() ; i++){
    cout<<a[i] ;
   }








}