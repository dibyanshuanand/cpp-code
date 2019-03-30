#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nTest;
    cin >> nTest;
    string num;
    int len;

    while (nTest--) {
        cin >> len;
        cin >> num;
        int count = 0;
        int shuf = 0;

        for (int i = 0 ; i < num.length() ; ++i) {
            if (num.at(i) == '1')
                count++;
        }

        if (count % 3 != 0) {
            cout << "-1\n";
            continue;
        }

        if (num.at(len-1) == '1')
            shuf = 1;
        else
            shuf = 0;

        // int count1 = 0;
        // while (num.at(count1) != '1' && count1 < num.length()) {
        //     count1++;
        // }

        string res = "";
        int k;
        if (count == num.length())
            k = num.length();
        else
            k = num.length() - count - 1;
        for (int i = 0 ; i < k ; ++i)
            res = res + '0';
        for (int i = 0 ; i < count ; ++i)
            res = res + '1';
        res = res + '0';

        // int qshuf = (num.length() - count) - count1 - 1;

        cout << shuf << "\n" << res << "\n";
    }

    return 0;
}