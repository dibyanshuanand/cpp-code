#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nTest;
    cin >> nTest;
    int res[nTest];
    int r,c;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> r >> c;
        if ((r*c) % 2 == 0)
            res[i] = 1;
        else
            res[i] = 0;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "YES" << "\n";
        else if (res[i] == 0)
            cout << "NO" << "\n";
    }

    return 0;
}