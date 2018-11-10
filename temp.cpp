#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	vector<int>v;
	for(int i=0;i<10;++i)
	{
		cin>>x;
		v.push_back();

	}

	vector<int>::iterator itr;

	for(itr=v.begin(); itr != v.end(); ){
		itr = v.erase(itr);
	}

	cout<<v.size();

	for(int i=0; i < v.size(); i++)
		cout<<v[i]<<' ';
}