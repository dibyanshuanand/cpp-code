#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int n;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        int a[n];
        int count = 0;
        for (int j = 0 ; j < n ; ++j) {
            cin >> a[j];
        }
        for (int j = 0 ; j < n ; ++j) {
            if ((j == 0) && (a[j] != a[j+1]))
                count++;
            else if ((j == (n - 1)) && (a[j] != a[j-1]))
                count++;
            else {
                if ((a[j] != a[j-1]) || (a[j] != a[j+1]))
                    count++;
            }
        }

        res[i] = count;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}