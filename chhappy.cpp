#include <bits/stdc++.h>

using namespace std;

void arrayInput(int a[], int y) {
    for (int x = 1 ; x <= y ; ++x)
        cin >> a[x];
}

// void arrayPrint(int a[], int n) {
//     for (int x = 0 ; x < n ; ++x)
//         cout << a[x] << endl;
// }

int main (void) {
    int nTest;
    cin >> nTest;
    int n;

    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        res[i] = 0;
        cin >> n;
        int a[n+1];
        a[0] = 0;
        arrayInput (a, n);
        for (int j = 1 ; j <= n-1 ; ++j) {
            for (int k = j+1 ; k <= n ; ++k) {
                if ((a[a[j]] == a[a[k]]) && (a[j] != a[k]))
                    res[i] = 1;
            }
        }
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 1)
            cout << "Truly Happy" << endl;
        else if (res[i] == 0)
            cout << "Poor Chef" << endl;

    return 0;
}