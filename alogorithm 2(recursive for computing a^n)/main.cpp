#include <iostream>

using namespace std;

double power(double a, int n) {
    if (n == 0) {
        return 1.0;
    } else {
        return a * power(a, n - 1);
    }
}

double calculate_power(double &input_a, int &input_n) {
    cout << "Input a: ";
    cin >> input_a;
    cout << "Input n: ";
    cin >> input_n;

    if (input_n < 0 || input_a == 0) {
        cout << "n should be non-negative, and a should be a nonzero real number. Please input again." << endl;
        return calculate_power(input_a, input_n);
    } else {
        return power(input_a, input_n);
    }
}

int main() {
    double a;
    int n;

    double result = calculate_power(a, n);

    cout << "Result of " << a << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}
