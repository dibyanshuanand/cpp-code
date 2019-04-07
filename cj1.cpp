#include <bits/stdc++.h>
using namespace std;

int check (int a) {
    int count = -1, d;

    while (a != 0) {
        d= a % 10;
        a /= 10;
        count++;
        if (d == 4)
            return count;
            // return (n*(int)pow(10, count));
    }

    return -1;
}

int main () {
    cout << "Hello\n";
    int nTest;
    cin >> nTest;
    int num;
    
    while(nTest--) {
        cin >> num;

        int n = num, n1, d, count = 0;
        int chk;
        while (num != 0) {
            count++;
            n /= 10;
        }

        

        while ((chk = check(n) != -1) && (chk = check(n1) != -1)) {
            // n = num - ((pow(10, chk)) + (num % (pow(10,chk))));
            n = num - (pow(10,chk));
            n1 = num - n;
        }

        printf("%d %d\n", n, n1);
    }

    return 0;
}