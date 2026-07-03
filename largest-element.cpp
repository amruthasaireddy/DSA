#include <bits/stdc++.h>
using namespace std;

void largestElement(int arr[], int n) {
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << max;
}

int main() {
    int n;
    cin >> n; // n = 5
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    largestElement(arr, n);
    return 0;
}
