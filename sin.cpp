# include <bits/stdc++.h>

using namespace std;

float sines (float);
float e (float);
int fact (int);

int main(void)
{
	float x;
	cout << "Enter a value : ";
	cin >> x;
	float sine = sines(x);
	float exp = e(x);
	float sum = (sine * sine) + (exp * sine) + (x * x) + 10;
	cout << sum << endl;
	return 0;
}

float sines (float a) {
	float res = 0; int t = 0;
	stringstream ss;
	string s;
	char ch;
	for (int i=1 ; ; i+=2) {
		ss << abs(res - (int)res);
		ss >> s;
		ch = s[s.length()-1];
		if (ch != '0') {
			res = res + ((pow(-1, t)*(pow(a, i) / fact(i))));
			t++;
		}
		else
			break;
	}
	return (res);
}

int fact (int n) {
	int f = 1;
	for (int i = 1; i <= n; i++) {
		f = f * i;
	}
	return (f);
}

float e (float a) {
	int res = 1;
	stringstream ss;
	string s;
	char ch;
	for (int i = 1; ; i++) {
		ss << abs(res - (int)res);
		ss >> s;
		ch = s[s.length()-1];
		if (ch != '0')
			res = res + (pow(a, i) / fact(i));
		else
			break;
	}
	return (res);
}