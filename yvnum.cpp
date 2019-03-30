#define MOD 1000000007
#include <bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <cstring>

using namespace std;

int main () {
    int nTest;
    cin >> nTest;
    string res[nTest];
    int n;
    string result = "";
    int loop, count, temp;

    for (int i = 0 ; i < nTest ; ++i) {
        result = "";
        cin >> n;
        std::string str = std::to_string(n);
        char s[str.length()];
        for (int j = 0 ; j < str.length() ; ++j)
            s[j] = str.at(j);
        
        loop = str.length();
        count = 1;
        result = result + str;
        while (count <= (loop-1)) {
            temp = s[0];
            for (int k = 0 ; k < str.length()-1 ; ++k)
                s[k] = s[k+1];
            s[str.length()-1] = temp;

            for (int k = 0 ; k < str.length() ; ++k)
                result = result + s[k];
            
            count++;
        }

        stringstream ss(result);
        int x = 0;
        ss >> x;

        res[i] = x;
    }

    for (int i = 0 ; i < nTest ; ++i)
        cout << res[i] << endl;

    return 0;
}