#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int a[nTest], b[nTest];
    int aSum = 0, bSum = 0;
    int flag;
    int max = 0;
    int diff;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> a[i] >> b[i];
        aSum = aSum + a[i];
        bSum = bSum + b[i];
        diff = aSum - bSum;
        if (abs(diff) > max) {
            max = abs(diff);
            if (diff < 0)
                flag = 2;
            else
                flag = 1;
        }
    }
    
    cout << flag << " " << max << endl;

    return 0;
}