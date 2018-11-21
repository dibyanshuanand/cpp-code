#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    long long a, b, k;
    cin >> nTest;
    long long res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        long long pos = 0;
        cin >> a >> b >> k;
        if (k % 2 == 0) {
            pos = (k/2) * (a-b);
        }
        else {
            pos = (((k + 1)/2) * a) - (((k - 1)/2) * b);
        }
        res[i] = pos;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}