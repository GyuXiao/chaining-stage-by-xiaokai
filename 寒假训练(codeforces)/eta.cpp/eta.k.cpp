//https://vjudge.net/contest/171211#problem/K codeforces545d
//题意是这样，时间超过了某个人的等待时间，他就会离开，所以他的时间不计入总时间
#include<cstdio>
#include<algorithm>

using namespace std;
using ll = long long;
ll a[100005];

int main()
{
    ll n;
    while(~scanf("%lld", &n))
        {   
            
            for(ll i=0; i<n; i++)
                scanf("%lld", &a[i]);
            
            sort(a, a+n);
            int cnt = 1;
            ll sum = a[0] ;

            for(ll j=1; j<n; j++)
                {
                    
                    if(sum<=a[j]) {cnt++; sum += a[j];}
                    
                }

                    printf("%d\n", cnt);

        }
}