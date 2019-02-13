#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int nTest;
    cin >> nTest;
    int numChef;
    ll res[nTest];
    ll a;
    
    for (int i = 0 ; i < nTest ; ++i) {
        cin >> numChef;
        ll sum = 0;
        for (int j = 0 ; j < numChef ; ++j) {
            cin >> a;
            sum += a;
        }
        // ll max = a[0];
        // for (int j = 1 ; j < numChef ; ++j) {
        //     if (a[j] > max)
        //         max = a[j];
        // }
        res[i] = sum - numChef + 1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";
    
    return 0;
}