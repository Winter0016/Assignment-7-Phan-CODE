#include <iostream>

using namespace std;

int iterativeFibonacci(int n) {
    if (n == 0) {
        return 0;
    } else {
        int x = 0;
        int y = 1;

        for (int i = 1; i < n; ++i) {
            int z = x + y;
            x = y;
            y = z;
        }

        return y;
    }
}

int main() {

    int n;
    cout << "Enter a non-negative integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }

    int result = iterativeFibonacci(n);

    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
