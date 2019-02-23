#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int nTest;
    cin >> nTest;
    ll chfRecv;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> chfRecv;
        ll chfAmt = 0;
        int d1 = 1, d2 = 1;
        ll max = 0;
        int res2;

        chfAmt = (chfAmt + chfRecv) - (ll)pow(2, (d1 - 1));
        while (chfAmt > 0) {
            if (chfAmt > max) {
                max = chfAmt;
                res2 = d2;
            }
            d1++; d2++;
            chfAmt = (chfAmt + chfRecv) - (ll)pow(2, (d1 - 1));
        }

        cout << d1-1 << " " << res2 << "\n";
    }

    return 0;
}