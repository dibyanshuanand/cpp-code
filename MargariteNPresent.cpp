#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    long l, r;
    long sumr = 0, suml = 0;
    long res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> l >> r;
        sumr = 0, suml = 0;
        if (r % 2 == 0)
            sumr = r/2;
        else
            sumr = 0 - ((r+1) / 2);

        if ((l-1) % 2 == 0)
            suml = (l-1)/2;
        else
            suml = 0 - (l / 2);
        res[i] = sumr - suml;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;
    
    return 0;
}