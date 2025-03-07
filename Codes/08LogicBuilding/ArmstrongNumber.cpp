#include<iostream>
using namespace std;

int power(int base, int exp) {
    int result = 1;
    while(exp--) {
        result *= base;
    }
    return result;
}

bool armstrong(int n) {
    int digits = to_string(n).length();  // Correct number of digits
    int sum = 0, t = n;

    while (t > 0) {
        int rem = t % 10;
        sum += power(rem, digits);  // Manual Power Function
        t /= 10;
    }

    return (sum == n);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (armstrong(n)) {
        cout << "Yes, Armstrong Number" << endl;
    } else {
        cout << "No, Not an Armstrong Number" << endl;
    }

    return 0;
}
