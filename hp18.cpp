#include <bits/stdc++.h>
using namespace std;

int n, luckBob, luckAlice;

void arrayInput (int a[]) {
    for (int z = 0 ; z < n ; ++z)
        cin >> a[z];
    return;
}

void deleteElementAt(int pos, int a[]) {

    for (int y = pos ; y < n-1 ; ++y) {
        a[y] = a[y+1];
    }
    a[n-1] = -1;
    n--;

    for (int y = 0 ; y < n ; ++y)
        cout << a[y] << " ";
    cout << endl;
    return;
}

int luckySearch (int player, int a[]) {
    int luckyNum;
    int result = -1;
    if (player == 1)
        luckyNum = luckBob;
    else if (player == 2)
        luckyNum = luckAlice;
    
    for (int x = 0 ; x < n ; ++x) {
        if (a[x] % luckyNum == 0) {
            result = x;
            deleteElementAt(x, a);
            x--;
        }
    }
    return result;
}


int main () {
    int nTest;
    cin >> nTest;
    int res[nTest];
    int k;
    int currentPlayer = 1; // 1 -> Bob  2 -> Alice

    for (int i = 0 ;i < nTest ; ++i) {
        cin >> n >> luckBob >> luckAlice;
        int series[n];
        // int rejectSeries[n];
        currentPlayer = 1;
        arrayInput(series);
        while(1) {
            k = luckySearch(currentPlayer, series);

            if (k == -1)
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
        if (res[q] = 1)
            cout << "ALICE" << endl;
        else if (res[q] == 2)
            cout << "BOB" << endl;
    }

    return 0;
}