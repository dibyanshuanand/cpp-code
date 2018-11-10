#include <bits/stdc++.h>

using namespace std;

int main()
{
	unordered_set<int> myset;

	for(int i=0;i < 5;++i){
		myset.insert(i);
	}

	int n;

	for(int i=0;i < 3 ; i++){
		cin>>n;
		if(myset.find(n) == myset.end())
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}

	return 0;
}