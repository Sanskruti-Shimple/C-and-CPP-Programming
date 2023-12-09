//The key number is 6 as in the o/p should be at the second index but the index o/p is shown as 1 which is incorrect so this cannot be used for unsorted array
#include <iostream>

int BinarySearch(int array[], int key, int low, int high);

int main() {
    int arr[] = {5, 6, 7, 8, 9, 10, 1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6; //The key number is 6 as in the o/p should be at the second index but the index o/p is shown as 1 which is incorrect so this cannot be used for unsorted array

    int result = BinarySearch(arr, key, 0, n - 1);

    if (result != -1) {
        std::cout << "Element found at index: " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

int BinarySearch(int array[], int key, int low, int high) {
    if (low > high) {
        return -1; // Element not found
    }

    int mid = low + ((high - low) / 2);

    if (array[mid] == key) {
        return mid; // Element found at index 'mid'
    } else if (key < array[mid]) {
        return BinarySearch(array, key, low, mid - 1); // Search in the left half
    } else {
        return BinarySearch(array, key, mid + 1, high); // Search in the right half
    }
}

//The key number is 6 as in the o/p should be at the second index but the index o/p is shown as 1 which is incorrect so this cannot be used for unsorted array