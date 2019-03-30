#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int nTest;
    cin >> nTest;

    string s1, s2;

    while (nTest--) {
        cin >> s1 >> s2;
        char str[(int)max(s1.length(), s2.length())];
        int f = 0;

        for (ll i = 0 ; i < s1.length() ; ++i) {
            for (ll j = 0 ; j < s2.length() ; ++j) {
                if (s1.at(i) == s2.at(j)) {
                    str[f] = s1.at(i);
                    f++;
                }
            }
        }

        for (int i = 0 ; i < f ; ++i) {
            for (ll j = 0 ; j < s1.length() ; ++j) {
                if (s1.at(j) == str[i])
                    s1 = s1.substr(0, j) + s1.substr(j+1, string::npos);
            }
            for (ll k = 0 ; k < s2.length() ; ++k) {
                if (s2.at(k) == str[k])
                    s2 = s2.substr(0, k) + s2.substr(k+1, string::npos);
            }
        }

        ll n = s1.length() + s2.length();
        
        cout << "Yes" << "\n";
    }

    return 0;

}