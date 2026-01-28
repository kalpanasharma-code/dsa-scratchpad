#include <iostream>
#include <algorithm>
using namespace std;

void reverseArr(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {3, 5, 8, 90, 34, 65, 98, 45, 89, 12};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Before reverse:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    reverseArr(arr, size);

    cout << "\nAfter reverse:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
