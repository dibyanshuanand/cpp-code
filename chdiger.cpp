#define ll long long
#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    ll num, dig;

    for (int i = 0 ; i < nTest ; ++i) {
        cin >> num >> dig;
        ll num1 = num;
        int numDig = 0;

        while (num1 != 0) {
            numDig++;
            num1 /= 10;
        }

        int count = 0, k = 1;
        num = num * 10 + dig;
        ll min = num;
        ll ex;
        ll num2 = dig;

        while (k <= numDig) {
            num2 = num2 * 10 + dig;
            k++;
        }

        while (num != num2) {
            k = 1;
            while (k <= (numDig+1)) {
                ex = (int)(num / pow(10, k)) * (int)pow(10, k-1) + (num % (int)pow(10, k-1));
                if (ex <= min)
                    min = ex;
                k++;
            }
            num = min * 10 + dig;
        }

        cout << min << "\n";
    }

    return 0;
}