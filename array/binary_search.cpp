#include<iostream>
using namespace std ;

 int binarySearch(int arr[],int n , int key){
    int start = 0 ;
    int end = n-1 ;
       // start + end -> can overflow int limit so keeing this same and within limit .

    while(start<=end){
        
       int mid = start + (end-start)/2 ;
     
       if(arr[mid]== key){
        return mid ;
       }

       else if(arr[mid]<key){
        start = mid + 1;
       }

       else {
        end = mid - 1 ;
       }


    }

    return -1 ;
 }


 int main(){
   int arr[1000] ;
   int size ;
   cout<<"enter size of array : " ;
   cin>>size ;
     
    for(int i = 0 ; i< size ;i++ ){
        cout<<endl<<"enter "<<i+1<<" element : " ;
        cin>>arr[i] ;
    }
    
    int key ;
    cout<<"enter element u want to search : " ;
    cin>>key ;

   cout<< binarySearch(arr , size , key) ; 
    









 }