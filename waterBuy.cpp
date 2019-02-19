#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    ll n, a, b;
    ll res[nTest];
    ll amt = 0, amt1 = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> a >> b;
        if (a <= (float)(b/2))
            amt = n * a;
        else {
            amt1 = (ll)(n/2) * b;
            amt1 += ((n % 2) * a);
            amt = n * a;
            amt = (amt < amt1) ? amt : amt1;
        }
        res[i] = amt;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}