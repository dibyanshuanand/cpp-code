#include <bits/stdc++.h>
using namespace std;

int n, luckBob, luckAlice;

void arrayInput (long a[]) {
    for (int z = 0 ; z < n ; ++z)
        cin >> a[z];
    return;
}

// void deleteElementAt(int pos, int a[]) {
//     for (int y = pos ; y < n-1 ; ++y) {
//         a[y] = a[y+1];
//     }
//     a[n-1] = -1;
//     n--;

//     return;
// }

int luckySearch (int player, long a[]) {
    long luckyNum;
    int result = -1;
    int count = 0;
    if (player == 1)
        luckyNum = luckBob;
    else if (player == 2)
        luckyNum = luckAlice;
    
    for (int x = 0 ; x < n ; ++x) {
        if (a[x] % luckyNum == 0) {
            a[x] = -1;
            count++;
            // result = x;
            // deleteElementAt(x, a);
            // x--;
        }
    }
    return count;
}


int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int nTest;
    cin >> nTest;
    int res[nTest];
    int k;
    int currentPlayer = 1; // 1 -> Bob  2 -> Alice

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> n >> luckBob >> luckAlice;
        long series[n];
        // int rejectSeries[n];
        currentPlayer = 1;
        arrayInput(series);
        while(1) {
            k = luckySearch(currentPlayer, series);

            if (k == 0)
                break;
            // else
            //     deleteElementAt(k, series);
            
            if (currentPlayer == 1)
                currentPlayer = 2;
            else if (currentPlayer == 2)
                currentPlayer = 1;
        }
        res[i] = currentPlayer;
    }

    for (int q = 0 ; q < nTest ; ++q) {
        if (res[q] == 1)
            cout << "ALICE" << endl;
        else if (res[q] == 2)
            cout << "BOB" << endl;
    }

    return 0;
}