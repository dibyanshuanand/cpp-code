#include <bits/stdc++.h>
using namespace std;

int main () {
    int weightBall, heightBall;
    int wFirstStone, hFirstStone, wSecondStone, hSecondStone;

    cin >> weightBall >> heightBall;
    cin >> wFirstStone >> hFirstStone;
    cin >> wSecondStone >> hSecondStone;

    while (heightBall >= 0) {
        weightBall += heightBall;
        if (heightBall == hFirstStone)
            weightBall -= wFirstStone;
        if (weightBall < 0)
            weightBall = 0;

        if (heightBall == hSecondStone)
            weightBall -= wSecondStone;
        if (weightBall < 0)
            weightBall = 0;

        heightBall--;
    }

    cout << weightBall << endl;

    return 0;
}