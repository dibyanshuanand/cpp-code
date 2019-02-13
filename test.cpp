#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6};
	cout << sizeof(a)/sizeof(a[0]) << endl;
	cout << a[4] << endl;
	for (int i = 0 ; i < 10 ; ++i)
		cout << a[i] << endl;

	return 0;
}