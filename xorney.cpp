#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nTest;
    cin >> nTest;
    long long res[nTest];
    long long l, r;
    
    for (int i = 0 ; i < nTest ; ++i) {
        cin >> l >> r;
        if (r - l >= 1 )
            res[i] = l ^ (l + 1);
        else
            res[i] = l;
        for (long long j = l+2 ; j <= r ; ++j)
            res[i] = res[i] ^ j;

        if (res[i] % 2 == 0)
            res[i] = 2;
        else
            res[i] = 1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 2)
            cout << "Even\n";
        else if (res[i] == 1)
            cout << "Odd\n";

    return 0;
}