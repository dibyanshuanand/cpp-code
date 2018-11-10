#include <bits/stdc++.h>

using namespace std;

void secondQ(int b[], int n, int k) {
    int count = 0, max = 0;
    for (int z = 1 ; z <= n ; ++z) {
        if (b[z] == 1) {
            count++;
            if (count >= max)
                max = count;
        }
        else
            count = 0;
    }
    if (max > k)
        max = k;

    cout << max << endl;
}

void firstQ(int a[], int b[], int n) {
    b[1] = a[n];
    for (int x = 2; x <= n ; ++x) {
        b[x] = a[x-1];
    }
}

int main (void) {
    int n, q, k;
    cin >> n >> q >> k;
    int a[n+1], b[n+1];
    a[0] = 10;
    b[0] = a[0];
    string query;
    char chAt;

    for (int i = 1 ; i <= n ; ++i) {
        cin >> a[i];
        b[i] = a[i];
    }
    cin >> query;
    for (int i = 0 ; i < q ; ++i) {
        chAt = query.at(i);
        if (chAt == '?')
            secondQ(b, n, k);
        if (chAt == '!')
            firstQ(a, b, n);
    }

    return 0;
}