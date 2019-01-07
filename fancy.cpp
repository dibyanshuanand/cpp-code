#include <bits/stdc++.h>
using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    int res[nTest];
    string quoteInput;
    string word = "";
    string check = "not";
    // int f;

    for (int i = 0 ; i < nTest ; ++i)
        res[i] = 0;

    for (int i = 0 ; i < nTest ; ++i) {
        // cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cin >> ws;
        getline(cin, quoteInput);
        quoteInput = quoteInput + ' ';
        for (int j = 0 ; j < quoteInput.length() ; ++j) {
            if (quoteInput.at(j) == ' ') {
                if (word == check) {
                    res[i] = 1;
                    break;
                }
                word = "";
            }
            // else if (quoteInput == check)
            //     res[i] = 1;
            else {
                word = word + quoteInput.at(j);
            }
        }
        // outOfJ: {
        //  f = 10;
        // }
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "Real Fancy" << endl;
        else
            cout << "regularly fancy" << endl;
    }

    return 0;
}
