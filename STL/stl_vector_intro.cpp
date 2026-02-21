#include<iostream>
#include<vector>
#include <algorithm>
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

  // insert at a particular index 

  a.insert(a.begin()+ 3 , 45 ) ; // first tell index by a.begin()+ 3 . like here 3 is index then tell value like 45 here is value 

  // clear whole vector 

  a.clear() ; // content will be cleared but there will empty vector in existence .

  // print first and  last element of array 

  cout<<v.front() ;
  cout<<v.back() ;

  // copy value of 1 vector to another 

  v = a ; //  put values of a in v 

  // printing array values 

  vector<int> arr ;
  arr.push_back(7) ;
  arr.push_back(17) ;
  arr.push_back(20) ;
  arr.push_back(22) ;
  arr.push_back(28) ;
  arr.push_back(40) ; 

  for(auto it = arr.begin() ; it!= arr.end() ;it++){
   cout<<*it <<"  " ;
  }
 
  cout<<endl ;

  for(auto i : arr){
    cout<< i <<" ";
  }


// sort in increasing order 
 sort(arr.begin() , arr.end()) ;

// sort in decreasing order 
 
sort(arr.begin() , arr.end() ,greater<int>()) ;

 sort(arr.rbegin() , arr.rend()) ;




// search in binary search 
 
cout<< binary_search(arr.begin() , arr.end() ,54) ; //54 is element i m searching for . answer wil be in 1 and 0 .

 // to find index 

 find(arr.begin() , arr.end() , 54 ) ; // this will give itertaor of 54 not index . to know index we will 

 find(arr.begin() , arr.end() , 54 ) - arr.begin() ;  



}