#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;

    int a, b, d;
    int res[nTest];

    for (int i = 0; i < nTest; ++i) {
        res[i] = 0;
        cin >> a >> b;
        res[i] = 1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    return 0;
}