#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;

    int n;
    int s, ji;
    int res[nTest];
    int flag;

    for (int i = 0; i < nTest ; ++i) {
        cin >> n;
        flag = 0;
        for (int j = 1 ; j <= n ; ++j) {
            cin >> s >> ji;
            if (ji-s > 5)
                ++flag;
        }
        res [i] = flag;
    }

    for (int k = 0 ; k < nTest ; ++k)
        cout << res[k] << endl;
}