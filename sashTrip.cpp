#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define sl long

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int nCity, tankCap;
    cin >> nCity >> tankCap;
    sl tankCur, curState = 1;
    sl amt = 0;

    if (nCity <= tankCap) {
        tankCur = nCity;
        amt = nCity-1;
    }
    else {
        tankCur = tankCap;
        amt = tankCur;
    }

    while (tankCur < nCity-curState) {
        curState++;
        tankCur--;
        amt += (tankCap - tankCur) * curState;
        tankCur += (tankCap - tankCur);
    }

    cout << amt;

    return 0;
}