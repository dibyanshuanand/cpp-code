#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int n, c;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> c;
        int candyReq[n];
        int candyTotal = 0;
        for (int j = 0 ; j < n ; ++j)
            cin >> candyReq[j];
        for (int j = 0 ; j < n ; ++j) {
            candyTotal += candyReq[j];
        }
        if (candyTotal <= c)
            res[i] = 1;
        else
            res[i] = 0;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "Yes\n";
        else if (res[i] == 0)
            cout << "No\n";
    }

    return 0;
}