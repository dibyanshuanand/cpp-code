#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int nTestC; 
	int n, m, x, y;
	int i, j;

	cin>>nTestC;

	int flag[nTestC];

	for(i=1;i<=nTestC;++i)
	{
		cin >> n >> m >> x >> y;
		if((n==2)&&(m==2))
			flag[i-1]=1;
		else if(((n-1)%x==0)&&((m-1)%y==0))
			flag[i-1]=1;
		else if(((n-1)%x==1)&&((m-1)%y==1))
			flag[i-1]=1;
		else
			flag[i-1]=0;
	}

	for(j=0;j<nTestC;++j){
		if(flag[j]==1)
			cout<<"Chefirnemo"<<endl;
		else if(flag[j]==0)
			cout<<"Pofik"<<endl;
	}

	return 0;
}
