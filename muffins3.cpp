#include <bits/stdc++.h>

using namespace std;

std::ios_base::sync_with_stdio(false);
cin.tie(NULL);

int main (void) {
    int nTest;
    cin >> nTest;
    int n , size = 0, temp;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n;
        size = 0;
        for (int j = 2 ; j <= n ; j++) {
            temp = n % j;
            if (temp >= size)
                size = j;
        }

        res[i] = size;
    }

    for (int k = 0 ; k < nTest ; ++k)
        cout << res[k] << endl;

    return 0;
}