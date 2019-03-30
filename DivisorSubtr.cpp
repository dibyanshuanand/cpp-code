#include <bits/stdc++.h>
using namespace std;

int primeCheck(int n) {
    int count = 0;
    for (int a = 1 ; a <= n ; ++a)
        if (n % a == 0)
            count++;
    if (count == 2)
        return (n);
    else
        return (-1);
}

int main (void) {
    int n;
    cin >> n;
    int k;
    int flag = 0;

    while (n != 0) {
        for (int i = 2 ; i <= n ; ++i) {
            k = primeCheck(i);
            if ((k == i) && (n % k == 0)){
                n = n - k;
                flag++;
                break;
            }// if
        }// for i
    }// while

    cout << flag << endl;
}// main