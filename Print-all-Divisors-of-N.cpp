#include <bits/stdc++.h>
using namespace std;

void printAllDivisors(int n){
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            divisors.push_back(i);
            if (i != n / i) {
                divisors.push_back(n / i);
            }
        }
    }
    sort(divisors.begin(), divisors.end());
    for (int d : divisors) {
        cout << d << endl;
    }
}

/*
int main() {
    int n;
    cin >> n;
    printAllDivisors(n);
    return 0;
}
*/
