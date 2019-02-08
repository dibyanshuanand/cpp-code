#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int nTest;
    cin >> nTest;
    int res[nTest];
    // string dish;
    int numDish;
    int check[26];
    int repChk[26];
    int count = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        count = 0;
        cin >> numDish;
        string dish[numDish];
        // for (int j = 1 ; j <= numDish ; ++j)
        //     check[j] = "00000000000000000000000000";
        int j = 0;
        char ch;
        while (j < numDish) {
            cin >> dish[j];    
            j++;        
        }
        for (int j = 0 ; j < 26 ; ++j)
            check[j] = 0 ;
        for (int j = 1 ; j <= numDish ; ++j) {
            for (int x = 0 ; x < 26 ; ++x)
            repChk[x] = 0 ;
            for (int k = 0 ; k < dish[j-1].length() ; ++k) {
                ch = dish[j-1].at(k);
                if (repChk[(int)ch - 97] == 0) {
                    check[(int)ch - 97] += j;
                    repChk[(int)ch - 97] = 1;
                }
            }
        }
        int intCheck = numDish * (numDish+1) / 2;
        for (int j = 0 ; j < 26 ; ++j) {
            if (check[j] >= intCheck)
                count++;
        }

        res[i] = count;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        cout << res[i] << "\n";
    }

    return 0;
}