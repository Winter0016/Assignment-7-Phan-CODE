#include <iostream>
#include <vector>

using namespace std;

// Merge procedure to combine two sorted lists into a single sorted list
vector<int> merge(const vector<int>& l1, const vector<int>& l2) {
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

int main() {
    // Example usage
    vector<int> l1 = {3, 9, 27};
    vector<int> l2 = {10, 38, 43, 82};

    vector<int> mergedList = merge(l1, l2);

    cout << "Merged list: ";
    for (int num : mergedList) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
