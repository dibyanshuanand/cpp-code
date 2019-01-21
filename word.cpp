#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin >> s;
    int l = s.length();
    int lower = 0, upper = 0;
    char ch;
    string res = "";
    int chI;


    for (int i = 0 ; i < l ; ++i) {
        ch = s.at(i);
        chI = ch;
        if (chI >= 65 && chI <= 90)
            upper++;
        else if (chI >= 97 && chI <= 122)
            lower++;
    }
    for (int i = 0 ; i < l ; ++i) {
        ch = s.at(i);
        if (lower >= upper)
            ch = tolower(ch);
        else
            ch = toupper(ch);
        res = res + ch;
    }

    cout << res << "\n";
    // cout << upper << lower << "\n";

    return 0;
}