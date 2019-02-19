#include <bits/stdc++.h>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main (){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int nTest;
    cin >> nTest;
    int numFnd;
    int res[nTest];

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> numFnd;
        int req[numFnd];

        for (int j = 0 ; j < numFnd ; ++j)
            cin >> req[j];

        qsort(req, numFnd, sizeof(int), compare);

        int perPre = 0;
        for (int j = 0 ; j < numFnd ; ++j) {
            if (req[j] <= perPre) {
                perPre++;
            }
            else
                break;
        }
        res[i] = perPre;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << "\n";

    return 0;
}