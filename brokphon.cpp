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
        if (a[0] != a[1])
            count++;
        if (a[n-1] != a[n-2])
            count++;
        for (int j = 1 ; j < n-1 ; ++j) {
            if ((a[j] != a[j-1]) || (a[j] != a[j+1]))
                count++;            
        }

        res[i] = count;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return (0);
}