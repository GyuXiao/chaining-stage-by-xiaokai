#include<cstdio>
#include<algorithm>
using namespace std;
using ll = long long;

ll pow(ll a, ll b)
    {
        ll base = 1;
        while(b)
            {
                if(b&1)
                base *= a;
                    a *= a;
                    b >>= 1;                    
            }
            return base;
    }

int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
        {
            ll num;
            scanf("%lld", &num);
            ll s = 0, b = 2;
            ll m = num;

                while(m)
                {
                    m /= 2;
                    s++;
                }s -= 1;

                ll sum = 0;
                    while(s)
                    {
                        sum += pow(b,s);
                        s--;
                    }
                 
            printf("%lld\n", num*(num+1)/2-2*sum-2);

        }

}