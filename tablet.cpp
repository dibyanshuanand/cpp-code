#include<bits/stdc++.h>
using namespace std;

int main() {
    int nTest;
    cin >> nTest;
    int res[nTest];
    int numTab, bud;
    int h, w, pri;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> numTab >> bud;
        int amt = bud;
        int scr = -1;

        for (int j = 0 ; j < numTab ; ++j) {
            cin >> w >> h >> pri;
            if ((h * w) >= scr && pri <= bud) {
                scr = h*w;
                amt = pri;
            }
        }

        res[i] = scr;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == -1)
            cout << "no tablet\n";
        else
            cout << res[i] << "\n"; 
    }

    return 0;
}