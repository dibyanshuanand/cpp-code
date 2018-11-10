#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;

    int res[nTest];
    int p, step = 0, f = 0;
    int diff = 5;

    for (int i = 0 ; i < nTest ; i++) {
        cin >> p;
        cout << "Input";
        step = 0, f = 0, diff = 5;
        while ((diff != 0) && (diff != 1)) {
            while (diff >= 0) {
                diff = p - pow(2, f);
                f++;
            }
            diff = p - pow(2, (f-2));
            step++;
        }
        if (diff == 1)
            step++;
        
        res[i] = step;
        cout << "Loop";
    }

    for (int i = 0; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}