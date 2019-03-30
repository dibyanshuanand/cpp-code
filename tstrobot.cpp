#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    int n, x;
    string query;
    vector <int> pos;

    while (nTest--) {
        cin >> n >> x;
        cin >> query;

        int dist = 1;
        pos.pb(x);
        for (int i = 0 ; i < n ; ++i) {
            char ch = query.at(i);
            if (ch == 'R')
                x += 1;
            else if (ch == 'L')
                x -= 1;
            
            vector <int>::iterator it = pos.begin();
            for ( ; it != pos.end() ; it++) {
                if (*it == x)
                    break;
            }
            if (it == pos.end()) {
                dist++;
                pos.pb(x);
            }
        }

        cout << dist << "\n";
    }

    return 0;
}