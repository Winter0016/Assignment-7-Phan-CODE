#include <iostream>

using namespace std;

int search(int arr[], int i, int j, int x) {
    if (arr[i] == x) {
        return i + 1; // Adding 1 to convert from 0-based index to 1-based index
    } else if (i == j) {
        return 0;
    } else {
        return search(arr, i + 1, j, x);
    }
}

int main() {
    // Example usage
    int arr[] = {4, 2, 8, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 6;

    int result = search(arr, 0, n - 1, x);

    if (result != 0) {
        cout << "Element found at position: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
