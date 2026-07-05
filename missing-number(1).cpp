#include <bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int sum1 = 0;
    for (int i = 0; i < n - 1; i++) {
        sum1 += arr[i];
    }
    int sum2 = (n * (n + 1)) / 2;
    return sum2 - sum1;
}

/*
int main() {
    int n;
    cin >> n;
    int arr[n-1];
    for (int i = 0; i < n-1; i++){
        cin >> arr[i];
    }
    cout << findMissingNumber(arr, n) << endl;
    return 0;
}
*/
