#include <bits/stdc++.h>
using namespace std;

int main () {
    string cardInHand;
    string cardOnTable = "";
    cin >> cardOnTable;
    char setTable = cardOnTable.at(0);
    char suitTable = cardOnTable.at(1);
    int res = 0;

    for (int i = 0 ; i < 5 ; ++i) {
        cin >> cardInHand;
        if (cardInHand.at(0) == setTable) {
            res = 1;
        }
        if (cardInHand.at(1) == suitTable) {
            res = 1;
        }
    }

    if (res == 1)
        cout << "YES" << endl;
    else if (res == 0)
        cout << "NO" << endl;

    return 0;
}