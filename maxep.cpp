#include <bits/stdc++.h>
using namespace std;

int main () {
    int coins = 1000;
    int n, c;
    int state = 0;
    int x = -1;
    cin >> n >> c;
    // int f = 0;

    // while (n > 0) {
    //     f = 0;
    //     if (state == 0) {
    //         cout << "1" << " " << n << endl << flush;
    //         n--;
    //         coins--;
    //         cin >> state;
    //     }
    //     else if (state == 1) {
    //         cout << "2" << endl << flush;
    //         coins = coins - c;
    //         state = 0;
    //         f = 1;
    //     }
    //     else if (state = -1) {
    //         // cout << "Invalid executed" << endl << flush;
    //         break;
    //     }
        
    //     if (state == 0 && f == 0 && (n+1) > x) {
    //         x = n + 1;
    //         break;
    //     }
    // }

    // cout << "3" << " " << x << endl << flush;

    for (int i = 1 ; i <= n ; ++i) {
        if (state == 0){
            cout << "1" << " " << i << endl << flush;
            coins--;
            cin >> state;
        }
        else if (state == 1) {
            cout << "2" << endl << flush;
            x = i - 1;
            coins -= c;
            break;
        }

        if (state == -1 || coins <= 0)
            break;
            
    }

    cout << "3" << " " << x << endl << flush;

    return 0;
}