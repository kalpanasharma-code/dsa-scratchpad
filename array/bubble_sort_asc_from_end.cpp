 #include<iostream>
 #include<algorithm>
 using namespace std ;
 void bubble_sort(int arr[] , int n ){
    for(int i = 0 ; i< n-1 ; i++){
        bool swapped = false ;
        for(int j = n -1 ; j>0 ;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j] ,arr[j-1]);
                swapped = true ;
            }
        }
        if(!swapped)
        break;
    }

 }