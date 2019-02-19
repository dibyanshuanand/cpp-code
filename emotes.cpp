#define ll long long
#include <bits/stdc++.h>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    ll numEm, numMax, row;
    cin >> numEm >> numMax >> row;

    ll a[numEm];

    for (int i = 0 ; i < numEm ; ++i)
        cin >> a[i];

    qsort(a, numEm, sizeof(ll), compare);

    int f = 1, count = 1;
    ll happy = 0;

    ll rem = numMax % (row + 1);

    if (rem == row) {
        happy += (a[numEm-1] * (int)(numMax/row)) * row;
        count += (int)(numMax/row) * row;
        happy += (a[numEm-2] * (numMax - count));
    }

    else {
        happy += (a[numEm-1] * (int)((numMax - rem)/row)) * row;
        count += (int)((numMax - rem)/row) * row;
        happy += (a[numEm-2] * (numMax - rem - count));
        count += (numMax - rem - count);
        happy += (a[numEm-1] * rem) ;
    }
    // while (count <= numMax) {
    //     if (f == 0) {
    //         happy += a[numEm-2];
    //         f = 1;
    //         count++;
    //     }
    //     else {
    //         if (row > (numMax - count)) {
    //             happy += (a[numEm-1] * (numMax - count));
    //             count += (numMax - count);
    //             f = 0;
    //         }
    //         else {
    //             happy += (a[numEm-1] * row);
    //             count += row ;
    //             f = 0;
    //         }
    //     }
    // }

    cout << happy << "\n";

    return 0;
}