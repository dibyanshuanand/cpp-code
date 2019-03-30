#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    ll num;
    int dig;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> num >> dig;
        ll num1 = num;
        int numDig = 0;

        while (num1 != 0) {
            numDig++;
            num1 /= 10;
        }
        num1 = num;
        ll num2 = dig;
        int k = 1, d;
        while (k < numDig) {
            num2 = num2 * 10 + dig;
            k++;
        }

        int max = -1;
        while (num != num2 && max != dig) {
            num = num * 10 + dig;
            max = -1;
            int f = 1, ind = 1;
            ll num2 = num;
            while (num2 != 0) {
                d = num2 % 10;
                if (d >= max) {
                    max = d;
                    f = ind;
                }
                num2 /= 10;
                ind++;
            }
            num = (int)(num / pow(10, f)) * (int)pow(10, f-1) + (num % (int)pow(10, f-1));
        }
        
        cout << num << "\n";
    }

    return 0;
}