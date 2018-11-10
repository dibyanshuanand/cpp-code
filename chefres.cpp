#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;

    int n , m;
    
    int diff;
    

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> m;
        int interval [n] [2];
        int mTime [m];
        int wTime[m];
        for (int j = 0 ; j < n ; ++j)
            cin >> interval [j] [0] >> interval [j] [1];
        for (int k = 0 ; k < m ; ++k)
            cin >> mTime [k];
        

        for (int l = 0 ; l < m ; ++l) {
            wTime[l] = -1;
            int min = 0;
            for (int a = 0 ; a < n ; ++a) {
                if ((mTime[l] >= interval [a][0]) && (mTime[l] < interval [a][1])) {
                    wTime[l] = 0;
                    goto loop_break;
                }
            }
            for (int k = 0 ; k < n ; ++k) {
                diff = (int)interval [k][0] - mTime[l];
                if (diff < min)
                    min = diff;
            }
            if (min <=0)
                wTime[l] = -1;
            else
                wTime[l] = min;

            loop_break:
                continue;
        }

        for (int)
    }
}