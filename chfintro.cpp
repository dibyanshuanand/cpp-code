#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int n, r;
    cin >> n >> r;
    int ratings[n];
    int res[n];

    for (int i = 0 ; i < n ; ++i) {
        cin >> ratings[i];
        if (ratings[i] >= r)
            res[i] = 1;
        else
            res[i] = 0;
    }

    for (int i = 0 ; i < n ; ++i) {
        if (res[i] == 1)
            cout << "Good boi" << endl;
        else if (res[i] == 0)
            cout << "Bad boi" << endl;
    }

    return 0;
}