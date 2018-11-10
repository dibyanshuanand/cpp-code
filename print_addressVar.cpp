#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	int* y = &x;
	cout << "Enter a number : ";
	cin >> x;
	cout << y << endl;
	cout << *y << endl;
}