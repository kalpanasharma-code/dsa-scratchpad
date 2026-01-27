#include <iostream>
using namespace std;

int searchElement(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;   // index found
        }
    }
    return -1;          // not found
}

int main() {
    int array[] = {7, 90, 89, 90, 56, 77, 98, 67};
    int size = sizeof(array) / sizeof(array[0]);
    int key;

    cout << "Enter number you want to search: ";
    cin >> key;

    int index = searchElement(array, size, key);

    if (index == -1) {
        cout << "Doesn't exist in array.";
    } else {
        cout << "Exists at index " << index;
    }

    return 0;
}
