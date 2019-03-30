#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    int n, kn;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> kn;
        int a[n];
        string s = "";

        for (int j = 0 ; j < n ; ++j) {
            cin >> a[j];
            s = s + to_string(a[j]);
        }

        string ss;

        for (int j = 0 ; j < n ; ++j) {
            for (int k = 1 ; k <= (n-j) ; ++k) {
                ss = s.substr(j, k);
            }
        }
        // cout << s << endl;
        
    }

    return 0;
}