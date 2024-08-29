#include <iostream>

using namespace std;

int gcd(int a, int b);
int reduce(int& num, int& denom);

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;
    if (reduce(numerator, denominator)) {
        cout << "Reduced fraction: " << numerator << "/" << denominator << endl;
    } else {
        cout << "Failed to reduce the fraction. Ensure both values are positive integers." << endl;
    }

    return 0;
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int reduce(int& num, int& denom) {
    if (num <= 0 || denom <= 0) {
        return 0; 
    }
    int divisor = gcd(num, denom);
    num /= divisor;
    denom /= divisor;

    return 1; 
}

