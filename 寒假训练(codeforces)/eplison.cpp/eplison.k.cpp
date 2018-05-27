//https://vjudge.net/contest/164709#problem/K codeforces 474b
#include<cstring>
#include<map>
#include<cstdio>
using namespace std;
using ll = long long;

map<ll,ll>mp;
int main()
{

    int n;
    scanf("%d", &n);
    ll prev=0;
    for(ll i=1; i<=n; i++ )
        {
            ll  num;
            scanf("%lld", &num);
            for( int j=1; j<=num; j++)
                {
                    mp.insert(make_pair(j+prev,i));
                }
            prev += num;
        }
    int m;
    scanf("%d", &m);
    while(m--)
    {
        ll query;
        scanf("%lld", &query);
        printf("%lld\n", mp[query]);
    }

}