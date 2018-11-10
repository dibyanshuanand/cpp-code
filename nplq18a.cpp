# include <bits/stdc++.h>

using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int sum[nTest];

    for (int i = 1; i <= nTest; ++i) {
        int nJewel, k_Robe;

        cin >> nJewel >> k_Robe;

        int price[nJewel];
        int f = 0;
        int nj = nJewel - 1;

        sum[i-1] = 0;

        for (int j = 0; j < nJewel; ++j) {
            cin >> price [j];
        }

        sort (price , price + nJewel);

        while (f < k_Robe) {
            sum[i-1] = sum[i-1] + price[nj];
            f++;
            nj--;
        }
        
    }

    for (int k = 0; k < nTest; ++k)
        cout << sum[k] << endl;
    
    return 0;
}

