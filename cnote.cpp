#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int poemLength, pagesLeft, kRubies, numNote;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> poemLength >> pagesLeft >> kRubies >> numNote;
        int notePage[numNote], price[numNote];

        for (int j = 0 ; j < numNote ; ++j)
            cin >> notePage[j] >> price[j];

        res[i] = 0;        
        for (int j = 0 ; j < numNote ; ++j) {
            if (notePage[j] >= (poemLength - pagesLeft) && price[j] <= kRubies) {
                res[i] = 1;
                break;
            }
        }
        
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "LuckyChef\n";
        else if (res[i] == 0)
            cout << "UnluckyChef\n";
    }

    return 0;
}