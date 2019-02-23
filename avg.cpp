#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    int res[nTest];
    int n, k, v;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> k >> v;
        int ele;
        int sum = 0;
        int missEle;

        for (int j = 0 ; j < n ; ++j) {
            cin >> ele;
            sum += ele;
        }

        missEle = v*(n+k) - sum;
        if (missEle % k == 0 && missEle > 0)
            res[i] = missEle / k;
        else
            res[i] = -1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}