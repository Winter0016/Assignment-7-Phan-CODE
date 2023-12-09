#include <iostream>

using namespace std;

int mpower(int b, int n, int m) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int temp = mpower(b, n / 2, m);
        return (temp * temp) % m;
    } else {
        int temp = mpower(b, n / 2, m);
        return (temp * temp % m * b % m) % m;
    }
}

int main() {
    int b = 2, n = 5, m = 1000;
    int result = mpower(b, n, m);
    cout << b << "^" << n << " mod " << m << " = " << result << endl;

    return 0;
}
