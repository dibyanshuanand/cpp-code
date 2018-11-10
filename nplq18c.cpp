# include <bits/stdc++.h>

using namespace std;

int fact (int n) {
    int f = 1;
    for (int i = 1 ; i <= n ; ++i)
        f = f * i;
    return (f);
}

int main (void) {
    int nTest;
    cin >> nTest;
    int lRan, rRan, q, n;
    int out;
    int f = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        
        cin >> lRan >> rRan >> q;
        int res[q];

        for (int j = 0 ; j < q ; ++j) {
            cin >> n;
            f = 0;
            if (n >= rRan)
                res[j] = -1;
            else if (n >= lRan) {
                for (int k = n ; k <= rRan ; ++k) {
                    out = fact(k-1);
                    if ((out % k) == (k-1)) {
                        res[j] = k;
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                    res[j] = -1;
            }
            else {
                for (int k = lRan ; k <= rRan ; ++k) {
                    out = fact(k-1);
                    if ((out % k) == (k-1)) {
                        res[j] = k;
                        f = 1;
                        break;
                    }
                }
                if (f == 0)
                    res[j] = -1;
            }
        }

        for (int l = 0 ; l < q ; ++l)
            cout << res[l] << endl;
    }

    return 0;
}