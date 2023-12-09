#include <iostream>
#include <vector>

using namespace std;

// Merge function to combine two sorted arrays into a single sorted array
vector<int> merge(vector<int>& l1, vector<int>& l2) {
    vector<int> merged;
    size_t i = 0, j = 0;

    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            merged.push_back(l1[i]);
            ++i;
        } else {
            merged.push_back(l2[j]);
            ++j;
        }
    }

    while (i < l1.size()) {
        merged.push_back(l1[i]);
        ++i;
    }

    while (j < l2.size()) {
        merged.push_back(l2[j]);
        ++j;
    }

    return merged;
}

// Recursive merge sort function
vector<int> mergeSort(vector<int>& arr) {
    if (arr.size() <= 1) {
        return arr;
    }

    size_t m = arr.size() / 2;

    vector<int> l1(arr.begin(), arr.begin() + m);
    vector<int> l2(arr.begin() + m, arr.end());

    return merge(mergeSort(l1), mergeSort(l2));
}

int main() {
    // Example usage
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    vector<int> sortedArr = mergeSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
