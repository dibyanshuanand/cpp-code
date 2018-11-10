#include <bits/stdc++.h>

using namespace std;

int main(void) {
	int nTest;
	cin >> nTest;
	long long minLyk, days, lyk, cnstnt;
	int i = 1;
	int res[nTest];

	while (i <= nTest) {
		cin >> minLyk >> days >> lyk >> cnstnt;

		long long lykAtD = lyk;

		if (lykAtD >= minLyk)
			res[i-1] = 1;

		else {
			for (int j = 2; j <= days; ++j) {
				if (lykAtD >= minLyk) {
					res[i-1] = 1;
					break;
				}
				else 
					lykAtD = lykAtD + (lykAtD * cnstnt);

			}
		}

		++i;
	}

	for (int k = 0; k < nTest; ++k) {
		if (res[k] == 1)
			cout << "ALIVE AND KICKING" << endl;
		else
			cout << "DEAD AND ROTTING" << endl;
	}

	return 0;
}