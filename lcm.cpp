#include <bits/stdc++.h>
using namespace std;

int lcm(int a, int b) {
   int maxVal = max(a, b);
   while (true) {
       if (maxVal % a == 0 && maxVal % b == 0) {
           return maxVal;
       }
       maxVal++;
   }
}

/*
int main(){
    int a, b;
    cin >> a >> b;
    cout << "LCM: " << lcm(a, b) << endl;
    return 0;
}
*/
