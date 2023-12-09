#include <iostream>

using namespace std;

int calculate(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculate(n - 1);
    }
}

int factorial(int & n,int &input) {
    cout << "Input n: ";
    cin >> n;

    if (n < 0) {
        cout << "n is NONNEGATIVE, input again! ";
        cout<<endl;
        factorial(n,input);
    } else {
        input = n;
        n = calculate(n);
    }

    return n;
}

int main() {
    int n;
    int input;
    factorial(n,input);

    cout << "Factorial of " << input << " is: " << n;

    return 0;
}
