#include <bits/stdc++.h>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main () {
    int n;
    cin >> n;
    int a[n];
    int diffMin, diffMax;
    
    for (int i = 0 ; i < n ; ++i) {
        cin >> a[i];
    }

    qsort(a, n, sizeof(int), compare);

    // for (int i = 0 ; i < n ; ++i)
    //     cout << a[i];

    diffMax = a[n-2] - a[0];
    diffMin = a[n-1] - a[1];

    if (diffMax < diffMin)
        cout << diffMax << endl;
    else
        cout << diffMin << endl;

    return 0;
}