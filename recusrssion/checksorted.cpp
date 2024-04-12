#include <bits/stdc++.h>
using namespace std;
bool func(int arr[], int size, int i) {
    if (i < size - 1) {
        if (arr[i] > arr[i + 1]) {
            return false; // Array is not sorted
        }
        return func(arr, size, i + 1);
    } else {
        return true; // Array is sorted
    }
}

int main() {
    bool ans;
    int arr[] = {12, 13, 14, 15, 16, 17};
    int size = sizeof(arr) / sizeof(arr[0]);
    ans = func(arr, size, 0);
    cout << ans;
    return 0;
}
