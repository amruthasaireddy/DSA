#include <bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[], int n){
    int max = arr[0];
    int secondLargest = -1;
    for (int i = 1; i <= n-1; i++){
        if (arr[i] > max){
                    secondLargest = max;
                    max = arr[i];
            }
            if (arr[i] > secondLargest && arr[i] < max){
                    secondLargest = arr[i];
            }
    }
    return secondLargest;
}

/*
int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    cout << secondLargestElement(arr, n) << endl;
    return 0;
}
*/
