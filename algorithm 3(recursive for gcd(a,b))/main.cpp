#include <iostream>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    } else {
        return gcd(b % a, a);
    }
}

int calculate_gcd(int &input_a, int &input_b) {
    cout << "Input a: ";
    cin >> input_a;
    cout << "Input b: ";
    cin >> input_b;

    if (input_a < 0 || input_b < 0) {
        cout << "a and b should be non-negative. Please input again." << endl;
        return calculate_gcd(input_a, input_b);
    } else if (input_a > input_b) {
        cout << "a should be smaller than b. Please input again." << endl;
        return calculate_gcd(input_a, input_b);
    } else {
        return gcd(input_a, input_b);
    }
}

int main() {
    int a, b;

    int result = calculate_gcd(a, b);

    cout << "GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
