#define mod 1000000007
#include <bits/stdc++.h>
using namespace std;

long long fact (int n) {
    int f = 1;
    for (int j = 1 ; j <= n ; ++j)
        f = f * j;
    return f;
}

int main () {
    int nTest;
    cin >> nTest;
    int nCells;
    long long count = 0;
    int res[nTest];
    int quo;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> nCells;
        count = 0;
        if (nCells % 2 == 0)
            count++;
        if (nCells % 3 == 0)
            count++;
        if (nCells % 5 == 0) {
            quo = nCells / 5;
            count = count + (fact(2*quo) / (fact(quo) * fact(quo)));
        }
        if (nCells % 5 == 2) {
            quo = (nCells-2) / 5;
            count = count + (fact((2*quo)+1) / (fact(quo) * fact(quo+1)));
        }
        if (nCells % 5 == 3) {
            quo = (nCells-3) / 5;
            count = count + (fact((2*quo)+1) / (fact(quo) * fact(quo+1)));
        }
        if (nCells % 5 == 4) {
            quo = (nCells-4) / 5;
            count = count + (fact((2*quo)+2) / (fact(quo) * fact(quo+2)));
        }

        res[i] = count % mod;
        cout << endl;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;
        cout << endl;
}