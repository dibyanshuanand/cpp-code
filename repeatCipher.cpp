#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    string t;
    cin >> n;
    cin >> t;
    string s = "";
    char chAt;
    string tNew = '@' + t;

    int i = 1;
    int add = 1;
    while (i <= n) {
        chAt = tNew.at(i);
        s = s + chAt;
        i = i + add;
        add++;
    }

    cout << s << endl;

    return 0;
}