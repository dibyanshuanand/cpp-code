#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    int probStat[32];
    int d, q;
    int di, pi;
    int dead, req;
    int sum = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> d;
        sum = 0;

        for (int j = 0 ; j < 32 ; ++j)
            probStat[j] = 0;

        for (int j = 0 ; j < d ; ++j) {
            cin >> di >> pi;
            probStat[di] = pi;
        }
        
        for (int j = 0 ; j < 31 ; ++j) {
            if ((probStat[j+1] != probStat[j]) && (probStat[j+1] != 0)) {
                sum += probStat[j+1];
                probStat[j+1] = sum;
            }
            else if ((probStat[j+1] != probStat[j]) && (probStat[j+1] == 0))
                probStat[j+1] = probStat[j];
        }

        // for(int l = 0 ; l < 32 ; ++l)
        //     cout << probStat[l] << endl;

        cin >> q;
        int res[q];
        for (int k = 0 ; k < q ; ++k) {
            cin >> dead >> req;
            if (probStat[dead] >= req)
                res[k] = 1;
            else
                res[k] = 0;
        }

        for (int l = 0 ; l < q ; ++l) {
            if (res[l] == 1)
                cout << "Go Camp" << endl;
            else if (res[l] == 0)
                cout << "Go Sleep" << endl;
        }
    }
    
    return (0);
}