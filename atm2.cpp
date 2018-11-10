#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    string res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        int n, k, a;
        //res[i-1] = "";
        cin >> n >> k;

        for (int j = 0 ; j < n ; ++j) {
            cin >> a;
            if (k >= a) {
                k = k-a;
                res[i] = res[i].append("1");
            }
            else
                res[i] = res[i].append("0");

            cout << a;
        }

        cout << res[i];
    }

    for (int l = 0; l < nTest ; ++l)
        cout << res[l] << endl;


    return 0;
}