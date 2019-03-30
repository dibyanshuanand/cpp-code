#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    int n[nTest], k[nTest];
    string res[nTest];

    string s = "";
    int freq, rem;
    int count;
    int f;

    for (int i = 0 ; i < nTest ; ++i)
        cin >> n[i] >> k[i];

    for (int i = 0 ; i < nTest ; ++i) {
        s = "";
        freq = n[i] / k[i];
        rem = n[i] % k[i];
        count = 0;
        f = 0;

        while (1) {
            for (int j = 97 ; j < 97+k[i] ; ++j) {
                s = s + (char)j;
                count++;
                if (count == 1) {
                    break;
                    f = 1;
                }
            }
            if (f == 1 || count >= n[i])
                break;
        }

        res[i] = s;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}