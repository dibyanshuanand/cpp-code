# include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    char ch, c, cf;
    int f = 0, max = 0;
    int res[nTest];
    
    for (int i = 0; i < nTest; ++i) {
        string sin;
        f = 0;
        max = 0;
        
        cin >> sin;

        for (int j = 0; j < sin.length(); ++j) {
            ch = sin.at(j);
            f = 0;
            for (int k = 0 ; k < sin.length() ; ++k) {
                c = sin.at(k);
                if (c == ch)
                    f++;
            }
            if (f > max) {
                max = f;
                cf = c;
            }
        }
        res [i] = sin.length() - max;
    }

    for (int l = 0; l < nTest; ++l)
        cout << res[l] << endl;

    return 0;
}