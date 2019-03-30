#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    int n, max, min;
    int gp = 0, gm = 0;
    int score;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        gp = 0; gm = 0;

        for (int j = 0 ; j < n ; ++j) {
            cin >> score;
            if (score >= 0)
                gp++;
            else
                gm++;
        }

        if (gp == 0)
            gp = gm;
        else if (gm == 0)
            gm = gp;

        if (gp > gm) {
            max = gp;
            min = gm;
        }
        else if (gp < gm) {
            max = gm;
            min = gp;
        }
        else {
            max = gp;
            min = gp;
        }

        cout << max << " " << min << "\n";
    }

    return 0 ;
}