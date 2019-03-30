#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    string str;

    cin >> str;
    string s = "00000";

    for (int i = 0 ; i < str.length() ; ++i) {
        char ch = str.at(i);
        if (ch == 'a')
            s.at(0) = '1';
        else if (ch == 'e')
            s.at(1) = '1';
        else if (ch == 'i')
            s.at(2) = '1';
        else if (ch == 'o')
            s.at(3) = '1';
        else if (ch == 'u')
            s.at(4) = '1';
    }


    int count = 0;
    for (int i = 0 ; i < 5 ; ++i) {
        if (s.at(i) == '0')
            count++;
    }
    if (count > 1)
        cout << "No\n";
    else 
        cout << "Yes\n";

    return 0;
}