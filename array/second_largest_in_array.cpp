#include <iostream>
#include <climits>
using namespace std;

int Find_second(int arr[], int size) {
    int max = INT_MIN;
    int second_max = INT_MIN;

    // Find maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Find second maximum element
    for (int i = 0; i < size; i++) {
        if (arr[i] > second_max && arr[i] != max) {
            second_max = arr[i];
        }
    }

    return second_max;
}

int main() {
    int arr[1000];
    int size;

    cout << "Enter size of array: ";
    cin >> size;

    // Validation
    if (size <= 1 || size > 1000) {
        cout << "Second largest element does not exist";
        return 0;
    }

    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int result = Find_second(arr, size);

    if (result == INT_MIN) {
        cout << "Second largest element does not exist";
    } else {
        cout << "Second largest element is: " << result;
    }

    return 0;
}
