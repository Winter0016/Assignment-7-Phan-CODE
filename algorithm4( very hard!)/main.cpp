#include <iostream>

using namespace std;

int calculate_GOD(int b, int n, int m) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int temp = calculate_GOD(b, n / 2, m);
        return (temp * temp) % m;
    } else {
        int temp = calculate_GOD(b, n / 2, m);
        return ((temp * temp) % m * b) % m;
    }
}

int calculate(int &b, int &m, int &n) {
    cout << "Input b: ";
    cin >> b;
    cout << "Input m: ";
    cin >> m;
    cout << "Input n: ";
    cin >> n;

    if (b <= 0) {
        cout << "b should be greater than zero. Please input again." << endl;
        return calculate(b, m, n);
    } else if (m < 2) {
        cout << "m should be greater than or equal to 2. Please input again." << endl;
        return calculate(b, m, n);
    } else if (n < 0) {
        cout << "n should be greater than or equal to 0. Please input again." << endl;
        return calculate(b, m, n);
    } else {
        return calculate_GOD(b, n, m);
    }
}

int main() {
    int b, m, n;

    int result = calculate(b, m, n);

    cout << "Result of " << b << " raised to the power of " << n << " mod " << m << " is: " << result;

    return 0;
}
