#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int res[nTest];
    string s;
    int count = 0, len;
    char ch;

    for (int i = 0 ; i < nTest ; ++i) {
        count = 0;
        cin >> len;
        cin >> s;
        for (int j = 0 ; j < len ; ++j) {
            ch = s.at(j);
            // cout << ch << "\n";
            if (ch == '1')
                continue;

            if (j == 0) {
                if (s.at(j+1) == '0') {
                    ++count;
                    s.at(j) = '1';
                }
            }
            else if (j == (len-1)) {
                if (s.at(j-1) == '0') {
                    ++count;
                    s.at(j) = '1';
                }
            }
            else {
                if ((s.at(j+1) == '0') && (s.at(j-1) == '0')) {
                    ++count;
                    s.at(j) = '1';
                }
            }
        }
        res[i] = count;
        cout << s << endl;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}