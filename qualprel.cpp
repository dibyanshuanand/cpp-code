#include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int n , k;
    int count = 0;
    int res[nTest];
    
    for (int i = 0 ; i < nTest ; ++i) {
        count = 0;
        cin >> n >> k;
        int score[n];
        for (int j = 0 ; j < n ; ++j)
            cin >> score[j];
        int a = sizeof(score)/sizeof(score[0]);
        sort (score, score+a, greater<int>());

        for (int l = 0 ; l < n ; ++l) {
            if (score[k-1] <= score[l])
                count++;
        }

        res[i] = count;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}