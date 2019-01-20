#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nTest;
    cin >> nTest;
    long res[nTest];
    int r, c, k;
    int f, count;
    int r1, r2, r3, r4, c1, c2, c3, c4;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> r >> c >> k;
        f = 1;
        r1=r;r2=r;r3=r;r4=r;
        c1=c;c2=c;c3=c;c4=c;
        int l,b;
        int l1, l2, b1, b2;
        count = 0;
        while (f <= k) {
            // if ((r-f) > 0 && (r-f) < 9)
            //     count++;
            // if ((r+f) > 0 && (r+f) < 9)
            //     count++;
            // if ((c-f) > 0 && (c-f) < 9)
            //     count++;
            // if ((c+f) > 0 && (c+f) < 9)
            //     count++;
            if ((r-f) > 0 && (c-f) > 0 && (r-f) < 9 && (c-f) < 9) {
                r1 = r - f;
                c1 = c - f;
            }
            if ((r+f) > 0 && (c+f) > 0 && (r+f) < 9 && (c+f) < 9) {
                r4 = r+f;
                c4 = c+f;
            }
            if ((r-f) > 0 && (c+f) > 0 && (r-f) < 9 && (c+f) < 9) {
                r2 = r - f;
                c2 = c + f;
            }
            if ((r+f) > 0 && (c-f) > 0 && (r+f) < 9 && (c-f) < 9) {
                r3 = r + f;
                c3 = c - f;
            }

            f++;
        }
        l1 = (int)(abs(c2 - c1)) + 1;
        b1 = (int)(abs(r3 - r1)) + 1;
        l2 = (int)(abs(c4-c3)) + 1;
        b2 = (int)(abs(r4-r2)) + 1;

        if (l1>l2)
            l = l1;
        else
            l = l2;

        if (b1>b2)
            b = b1;
        else
            b = b2;
        res[i] = l*b;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}