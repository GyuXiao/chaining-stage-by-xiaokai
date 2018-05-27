#include<bits/stdc++.h>
using namespace std;
using ll = long long;
ll per[1100];
ll N;
void ini()
{
	for(ll i=1; i<=N; i++)
	{
		per[i] = i;
	}
}

ll find(ll x)
{
	ll r = x;
	if(r!=per[x]) r = per[x];
	ll i = x, j;
	while(i!=r)
	{
		j = per[i]; per[i] = r; i =j;
		return r;
	}
 } 

void uni(ll x, ll y)
{
	ll fx = find(x);
	ll fy = find(y);
	if(fx!= fy) per[fx]=fy;
}

int main()
{
	ll  M;
	while(scanf("%lld%lld", &N, &M)==2 )
	{
		if(N==0){break;
		}
		ini();
		ll a,b;
		while(M--)
		{
			scanf("%lld%lld", &a, &b);
			uni(a,b);
		
		
		}        ll ans = 0;  
        //判断图中有几棵树，只要判断有几个根节点即可  
        //判断方法;父节点等于本身的节点就是根节点  
        for(int i = 1; i <= N; ++i){  
            if(per[i] == i)  
                ans++;  
        	}  
        //把这些根节点连通，最小需要ans - 1条边  
        printf("%lld\n", ans - 1);  
		
	}
}
