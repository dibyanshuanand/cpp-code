/* To gain insight about thte solution of the problem read Wikkipedia article on "Monty Hall Paadox"
    Problem : CODECHEF - DEC Long Challenge - CHFIDEAL
*/

#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, y, z;

    srand(time(NULL));

    x = (rand() % 3) + 1; // Generate random numbers bertween 1 to 3
    cout << x << endl << flush;

    cin >> y;

    for (int i = 1 ; i <= 3 ; ++i) {
        if (i != x && i != y) {
            z = i;
            break;
        }
    }

    cout << z << endl << flush;

    return 0;
}