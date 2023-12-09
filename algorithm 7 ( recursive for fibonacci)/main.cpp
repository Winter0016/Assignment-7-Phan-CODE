#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    // Example usage
    int n;
    cout << "Enter a non-negative integer n: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1; // Exit with an error code
    }

    int result = fibonacci(n);

    cout << "Fibonacci(" << n << ") = " << result << endl;

    return 0;
}
