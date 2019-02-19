#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int nTest;
    cin >> nTest;
    int n;
    string s;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        cin >> s;

        string subs[n];
        for (int j = 1 ; j <= n ; ++j) {
            subs[j-1] = s.substr(0, j);
        }

        int len = 0;
        string stemp;
        int max = 0, lenMax = 0, ind;
        for (int j = 0 ; j < n ; ++j) {
            len = subs[j].length();
            int appr = 1;
            for (int k = 1 ; k < (n+1-len) ; ++k) {
                stemp = s.substr(k, len);
                if (stemp == subs[j])
                    appr++;
            }
            if (appr >= max) {
                if (appr == max) {
                    lenMax = (len > lenMax) ? len : lenMax;
                    ind = (len == lenMax) ? j : ind;
                }
                else {
                    lenMax = len;
                    ind = j;
                    max = appr;
                }
            }
        }

        cout << subs[ind] << "\n";
    }

    return 0;
}