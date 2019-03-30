#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int nTest;
    cin >> nTest;
    int ptsReq, mat;
    int wins = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> ptsReq >> mat;
        wins = 0;

        if (mat >= ptsReq)
            wins = 0;
        else if ((2*mat) == ptsReq)
            wins = mat;
        else {
            int t = 1;
            while (t <= mat) {
                if ((2*t + (mat - t)) == ptsReq) {
                    wins = t;
                    break;
                }
                t++;
            }
        }

        cout << wins << "\n";
    }

    return 0;
}