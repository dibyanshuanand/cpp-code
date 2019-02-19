#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int arw, dm, mic;
    int grp[3]; // 0 -> grn  1 -> prp  2 -> blk

    cin >> arw >> dm >> mic;
    cin >> grp[0] >> grp[1] >> grp[2];

    int rem = grp[0] + grp[1] + grp[2];
    if (grp[0] < arw) {
        cout << "NO";
        return 0;
    }
    rem -= arw;
    grp[0] -= arw;

    if ((grp[0] + grp[1]) < dm) {
        cout << "NO";
        return 0;
    }
    rem -= dm;

    if (rem < mic) {
        cout << "NO";
    }
    else
        cout << "YES";

    return 0;
}