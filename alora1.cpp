#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int res[nTest];
    int n;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        int studStair;
        int a[n+1];
        for (int j = 0 ; j<= n ; ++j)
            a[j] = 0;
        for (int j = 0 ; j < n ; ++j) {
            cin >> studStair;
            a[studStair]++;
        }

        int j;
        for (j = 1 ; j <= n ; ++j) {
            if (a[j] >= 2)
                break;
        }
        if (j <= n)
            res[i] = 0;
        else
            res[i] = 1;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}