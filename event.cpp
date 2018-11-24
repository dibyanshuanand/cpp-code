#include <bits/stdc++.h>
#include <string>
using namespace std;

int dayToN(string s) {
    int a;
    string s1 = "monday", s2 = "tuesday" , s3 = "wednesday", s4 = "thursday", s5 = "friday", s6 = "saturday", s7 = "sunday";
    if (s == s1)
        a = 1;
    else if (s == s2)
        a = 2;
    else if (s == s3)
        a = 3;
    else if (s == s4)
        a = 4;
    else if (s == s5)
        a = 5;
    else if (s == s6)
        a = 6;
    else if (s == s7)
        a = 7;

    return (a);
}

int main(void) {
    int nTest;
    cin >> nTest;
    int res[nTest];
    int dl, dh;
    string dayl, dayh;
    int day1, day2;
    int days;
    int count = 0;

    for (int i = 0; i < nTest ; ++i) {
        cin >> dayl >> dayh >> dl >> dh;
        day1 = dayToN(dayl);
        day2 = dayToN(dayh);
        count = 0;
        

        if ((day2-day1) >= 0)
            days = day2 - day1 + 1;
        else
            days = (7-(day2-day1)) + 1;

        
        while ((days >= dl) && (days <= dh)) {
            count++;
            days = days + 7;
        }

        if (count == 1)
            res[i] = (days - 7);
        else if (count > 1)
            res[i] = 1;
        else if (count == 0)
            res[i] = 0;
    }

    for (int i = 0 ; i < nTest ; ++i) {
        if (res[i] == 1)
            cout << "many" << endl;
        else if (res[i] == 0)
            cout << "impossible" << endl;
        else
            cout << res[i] << endl;
    }

    return 0;
}