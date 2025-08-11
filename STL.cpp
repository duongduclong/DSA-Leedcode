#include <bits/stdc++.h>
using namespace std;

int main() {
    string arr[] = {"apple", "banana", "cherry", "date", "elderberry"};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr+n, greater<string>());
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}