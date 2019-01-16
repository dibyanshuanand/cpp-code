#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    long long res[nTest];
    long long l, r;
    long long amount = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> l >> r;
        long long days = r - l + 1;
        // int count = 1;
        // int flag = 2*l - 1;
        amount = (2*l*days)+(days*days)-(2*days);
        // while (count++ <= (r-l+1)) {
        //     amount += flag;
        //     flag += 2;
        // }
        res[i] = amount;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}