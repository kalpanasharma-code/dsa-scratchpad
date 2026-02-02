#include<iostream>
#include<algorithm>
using namespace std ;
 
 void bubble_sort(int arr[] , int n ){
    for(int i = n-2 ; i>=0;i--){
        bool swapped = false ;
        for( int j= 0 ; j<= i ; j++){
            if(arr[j]<arr[j+1]){
                swap(arr[j] ,arr[j+1]) ;
                swapped = true ;
            }
        }
        if(swapped== false){
            return ;
        }
    }

 }

 int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, n);

    cout << "Array after sorting in descending order:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
