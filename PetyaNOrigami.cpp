#include <bits/stdc++.h>
using namespace std;

int main (void) {
    long n, k;
    cin >> n >> k;
    long r1, r2, r3;

    if ((8*n)%k)
        r1 = (8*n)/k + 1;
    else
        r1 = (8*n)/k;
    
    if ((5*n)%k)
        r2 = (5*n)/k + 1;
    else
        r2 = (5*n)/k;

    if ((2*n)%k)
        r3 = (2*n)/k + 1;
    else
        r3 = (2*n)/k;

    cout << (r1 + r2 + r3) << endl;

    return 0;
}