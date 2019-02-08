#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    int numSoldiers;
    int atckSum;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> numSoldiers;
        int attack[numSoldiers], defense[numSoldiers];
        for (int j = 0 ; j < numSoldiers ; ++j)
            cin >> attack[j];
        for (int j = 0 ; j < numSoldiers ; ++j)
            cin >> defense[j];
        int shield = -1;
        for (int j = 0 ; j < numSoldiers ; ++j) {
            if (j == 0)
                atckSum = attack[1] + attack[numSoldiers-1];
            else if (j == (numSoldiers-1))
                atckSum = attack[numSoldiers-2] + attack[0];
            else
                atckSum = attack[j-1] + attack[j+1];

            // cout << atckSum << endl;

            if (atckSum < defense[j] && defense[j] >= shield)
                shield = defense[j];
        }

        res[i] = shield;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}