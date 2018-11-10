#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    string inp;
    char ch, ch1;

    int res[nTest];

    int len;
    int f1, f2;

    // for (int k = 0 ; k < nTest ; ++k)
    //     res[k] = 0;

    for (int i = 0; i < nTest ; ++i) {
        cin >> len;
        cin >> inp;
        f1 = 0; f2 = 0;
        ch = inp.at(0);
        ch1 = inp.at(len-1); 
        if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
            f1 = 1; 
        if ((ch1 == 'A') || (ch1 == 'E') || (ch1 == 'I') || (ch1 == 'O') || (ch1 == 'U')) {
            f2 = 1; }
        if ((f1 == 1) && (f2 == 1))
            res[i] = 1; }
        else {
            f1 = 0;
            f2 = 0;
            for (int j = 0 ; j < len-1 ; ++j) {
                ch = inp.at(j);
                ch1 = inp.at(j+1);
                if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U')) {
                    f1 = 1; 
                if ((ch1 == 'A') || (ch1 == 'E') || (ch1 == 'I') || (ch1 == 'O') || (ch1 == 'U'))
                    f2 = 1; 
                if ((f1 == 1) && (f2 == 1)) {
                    res[i] = 1;
                    break; } }
                else {
                    res[i] = 0;
                
                }
            }
        }
    }

    for (int i = 0 ; i < nTest ; i++) {
        if (res[i] == 1)
            cout << "Yes" << i << endl;
        else
            cout << "No" << res[i] << endl;
    }

    return 0;
}