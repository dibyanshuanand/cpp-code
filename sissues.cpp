#include <bits/stdc++.h>
using namespace std;

int main (void) {
    int nTest;
    cin >> nTest;
    int res[nTest];
    int n;
    char ch;
    int flag, sum;
    
    for (int i = 0 ;  i < nTest ; ++i) {
        cin >> n;
        int rec[n];
        flag = 0;
        sum = 0;
        for (int j = 0 ; j < n ; ++j) {
            cin >> ch;
            if (ch == '+')
                rec[j] = 1;
            else if (ch == '-')
                rec[j] = -1;
        }
        for (int j = 0; j < n ; ++j) {
            sum = sum + rec[j];
            if (sum < 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            res[i] = 0;
        else if (flag == 0)
            res[i] = 1;
    }

    for (int i = 0 ; i < nTest ; ++i)
        if (res[i] == 1)
            cout << "MAYBE YOU ARE SAFE" << endl;
        else if (res[i] == 0)
            cout << "FIND A NEW JOB" << endl;
    
    return 0;
}