#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int tcount = 0 , dcount = 0;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i)
        res[i] = 1;

    for (int i = 0 ; i < nTest ; ++i) {
        int tr, dr, ts, ds;

        cin >> tr;
        int atr[tr];

        for (int j = 0 ; j < tr ; ++j)
            cin >> atr[j];

        cin >> dr;
        int adr[dr];

        for (int j = 0 ; j < dr ; ++j)
            cin >> adr[j];

        cin >> ts;
        int ats[ts];

        for (int j = 0 ; j < ts ; ++j)
            cin >> ats[j];

        cin >> ds;
        int ads[ds];
        
        for (int j = 0 ; j < ds ; ++j)
            cin >> ads[j];

        for (int j = 0 ; j < ts ; ++j) {
            tcount = 0;
            for (int k = 0 ; k < tr ; ++k) {
                if (ats[j] == atr[k])
                    tcount++;
            }//k
            if (tcount == 0) {
                res[i] = 0;
                break;
            }//if
        }//outer-j

        if (res[i] == 1) {
            for (int j = 0 ; j < ds ; ++j) {
                dcount = 0;
                for (int k = 0 ; k < dr ; ++k) {
                    if (ads[j] == adr[k])
                        dcount++;
                }//k
            if (dcount == 0) {
                res[i] = 0;
                break;
            }//if
            }//outer-j
        }//if (res[i] == 1)
    }//outermost-i

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "yes" << endl;
        else if (res[i] == 0)
            cout << "no" << endl;
    }

    return 0;
}//main