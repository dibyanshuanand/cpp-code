#include <bits/stdc++.h>
using namespace std;

int main () {
    long x, y;
    int n;
    long hTemp = 0;
    int count = 0;

    cin >> x;
    cin >> y;
    cin >> n;

    long h[n];
    
    cout << "Good 1" << endl;

    for (int i = 0 ; i < n ; ++i)
        cin >> h[i];
    
    for (int i = 0 ; i < n ; ++i) {
        hTemp = y;
        while (hTemp < h[i]) {
            hTemp = hTemp - y;
            hTemp = hTemp + x;
            count++;
        }
    }

    cout << count << endl;

    return 0;
}