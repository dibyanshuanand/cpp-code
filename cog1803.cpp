#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int res[nTest];
    int vote;
    int n;
    int count1 = 0, count0 = 0, count_1 = 0;

    for (int i = 0 ; i < nTest ; ++i)
        res[i] = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        count0 = 0;
        count1 = 0;
        count_1 = 0;
        cin >> n;
        for (int j = 0 ; j < n ; ++j) {
            cin >> vote;
            if (vote == 1)
                count1++;
            else if (vote == 0)
                count0++;
            else if (vote == -1)
                count_1++;
        }

        if (count1 >= count_1)
            res[i] = 1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 1)
            cout << "YES" << endl;
        else if (res[i] == 0)
            cout << "NO" << endl;
    

    return 0;
}