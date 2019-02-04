#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int res[nTest];
    int a, b;
    long long n, k;
    long long count = 0;
    
    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> a >> b >> k;
        count = 0;
        long long j = 1;
        int da = n / a;
        int db = n / b;
        int f = 0;
        if (a % b == 0)
            f = a;
        else if (b % a == 0)
            f = b;
        else
            count = n / (a*b);
        
        if (f == 0)
            count = da+db - 2*count;
        else {
            count = n / f;
            count = da+db - 2*count;
        }
        // while (j++ <= n) {
        //     if ((j % a == 0 || j % b == 0) && (!(j % a == 0 && j % b ==0)))
        //         count++;
        // }
        if (count >= k)
            res[i] = 1;
        else
            res[i] = 0;
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 1)
            cout << "Win\n";
        else if (res[i] == 0)
            cout << "Lose\n";

    return 0;
}
