#include <bits/stdc++.h>

using namespace std;

int main (void) {
    long long int nTest;
    cin >> nTest;
     long long int nChef, nCook, k;
    int ser = 0;
    int rem;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> nChef >> nCook >> k;
        ser = 0;
        rem = (nChef + nCook) / k;
        if (rem % 2 == 0)
            ser = 0;
        else
            ser = 1;

        res[i] = ser;

    }

    for (int j = 0 ; j < nTest ; ++j) {
        if (res[j] == 0)
            cout << "CHEF" << endl;
        else if (res[j] == 1)
            cout << "COOK" << endl;
    }

    return 0;
}