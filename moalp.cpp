#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int res[nTest];
    int l , r;
    int d;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> l >> r; 
        int l1 = l - (l % 16) + 16;
        int k ;
        int count = 0;
        if (r < 16) {
            for (int j = l ; j <= r ; ++j)
                if (j % 16 > 9)
                    count += 1;
        }
        else
        {
        for (int j = l; j < l1 ; ++j) {
            if (j % 16 > 9)
                count += 1;
        }
        // cout << count << endl;
        count = count + (6 * (int)((r-l1+1)/16));
        // cout << count << endl << endl; 
        k = r % 16;
        if (k > 9)
            count += (k-9);
        }
        
        res[i] = count;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}