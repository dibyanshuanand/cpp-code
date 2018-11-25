#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int n, q;
    cin >> n;
    int p[n], h[n];
    int hb, hu;
    int h[n];
    int sum = 0;

    for (int i = 0 ; i < n ; ++i)
        cin >> p[i] >> h[i];
    for (int i = 0 ; i < n ; ++i) {
        sum = sum + h[i];
        h[i] = sum;
    }
    
    cin >> q;
    int res[q];

    for (int i = 0 ; i < q ; ++i) {
        cin >> hb >> hu;
        for (int j = 0 ; j < n ; ++j) {
            if ((hb < ))
        }
    }
}