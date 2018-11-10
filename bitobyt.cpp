# include <bits/stdc++.h>

using namespace std;

int main (void) {
    long int nTest;
    cin >> nTest;
    
    long int nTime;
    long long int bit = 1 , byt = 0 , nib = 0;
    long long int bitA[nTest];
    long long int bytA[nTest];
    long long int nibA[nTest];
    int i , j;

    for (int i = 0 ; i < nTest ; i++) {
        cin >> nTime;
        bit = 1 ; byt = 0 ; nib = 0;
        while (nTime > 0) {
            if (nTime <= 2)
                break;
            if (nTime > 2) {
                nib = bit * (nib + 1) ;
                bit = 0;
            }
            nTime = nTime - 2;
            if (nTime > 8) {
                byt = nib * (byt + 1);
                nib = 0;
            }
            nTime = nTime - 8;
            if (nTime > 16) {
                bit = byt * (bit + 2);
                byt = 0;
            }
            nTime = nTime - 16;
        }

        bitA[i] = bit;
        bytA[i] = byt;
        nibA[i] = nib;
    }

    for (int j = 0 ; j < nTest ; ++j)
        cout << bitA[j] << " " << nibA[j] << " " << bytA[j] << endl;

    return 0;
}