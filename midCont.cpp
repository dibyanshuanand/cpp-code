#include <bits/stdc++.h>
using namespace std;

int main () {
    int h1, m1, h2, m2;
    string hs, ms;

    scanf("%d:%d", &h1, &m1);
    scanf("%d:%d", &h2, &m2);

    int t1 = h1*60 + m1;
    int t2 = h2*60 + m2;
    int t3 = t1 + (t2-t1) / 2;

    int h = t3/60;
    int m = t3 % 60;

    if (h/10 == 0) 
        hs = '0' + to_string(h);
    else
        hs = to_string(h);

    if (m/10 == 0)
        ms = '0' + to_string(m);
    else
        ms = to_string(m);
        

    cout << hs << ":" << ms;

    return 0;
}