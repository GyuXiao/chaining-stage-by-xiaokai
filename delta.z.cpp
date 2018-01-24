#include<bits/stdc++.h>
using namespace std;
using ll = long long;

ll a[40][40];
int main()
{
	a[0][0]=1;
	for(int i=1; i<=35; i++)
	a[0][i]=1, a[i][i-1]=0;
	for(int i=1; i<=35; i++)
	{
		for(int j=1; j<=i; j++)
		{
			a[j][i] += a[j][i-1] + a[j-1][i];
		}
	}

	int kase=0; 
	int n;
	while(cin>>n)
	{
		if(n==-1) {break;}	
		++kase;
		cout<<kase<<" "<<n<<" "<<2*a[n][n]<<endl;
	}

}

