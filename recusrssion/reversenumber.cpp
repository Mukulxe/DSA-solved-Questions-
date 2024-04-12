#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    if (n == 0) {
        return;
    }
    cout << n % 10; // Print the last digit
    func(n / 10);   // Recursive call with the remaining digits
}

int main() {
    int n = 2000;
    func(n);
    return 0;
}
