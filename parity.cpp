#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int b, k;
    cin >> b >> k;
    int a[k];
    int num = 0;

    for (int i = 0 ; i < k ; ++i)
        cin >> a[i];

    int prevNum = a[0] * (pow(b, k-1));
    prevNum = (prevNum % 2) ? 0 : 1; // 0 -> Even  1 -> Odd

    for (int i = k - 2 ; i >= 0 ; --i) {
        num = (int)(a[k-i-1] * (pow(b, i))) % 2 ;
        if ((num + prevNum) == 0 || (num + prevNum == 2))
            prevNum = 0;
        else if ((num+prevNum) == 1)
            prevNum = 1;
    }

    if (num % 2 == 0)
        cout << "even\n";
    else
        cout << "odd\n";
    
    return 0;
}