#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long int nTest;
    cin >> nTest;
    long long int x , y , n , m;
    int res [nTest];

    for (long long int i = 0 ; i < nTest ; ++i) {
        cin >> x >> y >> n >> m;
    
        res[i] = 0;
        for (long long int k = n ; k >= 1 ; ++k) {
            for (long long int l = m ; l >=1 ; ++l)
                if ((x*k) == (y*l)) {
                    res [i] = 1;
                    goto loop_break;
                }
            loop_break:
                break;    
        }
    }

    for (int j = 0 ; j < nTest ; ++j)
        if (res [j] == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    
    return 0;
}