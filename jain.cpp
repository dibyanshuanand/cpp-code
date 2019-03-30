#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    ll n;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        int a[n][5]; // a -> 0  e -> 1  i -> 2  o -> 3  u -> 4
        // string s;
        char ch;

        for (int j = 0 ; j < n ; j++) {
            a[j][0] = 0;
            a[j][1] = 0;
            a[j][2] = 0;
            a[j][3] = 0;
            a[j][4] = 0;
        }

        for (int j = 0 ; j < n ; ++j) {
            ch = getchar();
            // cout << ch ;
            while (ch != '\n') {
                if (ch == 'a')
                    a[j][0] = 1;
                else if (ch == 'e')
                    a[j][1] = 1;
                else if (ch == 'i')
                    a[j][2] = 1;
                else if (ch == 'o')
                    a[j][3] = 1;
                else if (ch == 'u')
                    a[j][4] = 1;

                ch = getchar();
            }
        }

        ll count = 0;
        for (int j = 0 ; j < n-1 ; ++j) {
            for (int k = j+1 ; k < n ; ++k) {
                if (!((a[j][0] + a[k][0] == 0) || (a[j][1] + a[k][1] == 0) || (a[j][2] + a[k][2] == 0) || (a[j][3] + a[k][3] == 0) || (a[j][4] + a[k][4] == 0)))
                    count++ ;
            }
        }

        cout << count << "\n";
    }

    return 0;
}