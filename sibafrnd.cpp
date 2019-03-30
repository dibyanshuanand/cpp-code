#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int nTest;
    cin >> nTest;

    int l, r, d, k;

    while(nTest--) {
        cin >> l >> r;
        cin >> d >> k;
        int c = 0;
        
        for (int i = l ; i <= r ; ++i) {
            int count = 0, num = i, di;
            while (num != 0) {
                di = num % 10;
                if (d == di)
                    count++;
                num /= 10;
            }
            if (count <= k)
                c++;
        }

        cout << c << "\n";
    }

    return 0;
}