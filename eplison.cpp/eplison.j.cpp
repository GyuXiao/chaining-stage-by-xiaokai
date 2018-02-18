#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 2*100000+10;
long long a[maxn];

int main()
{
    long long n,  minn=1000000001, maxn = 0;
    
    scanf("%lld", &n);
    memset(a, 0, sizeof(a));
    for(int i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            maxn = max(maxn, a[i]);
            minn = min(minn, a[i]);
        }

    long long sman=0, smin=0;
    for(int i=0; i<n; i++)
        {
            if(a[i]==maxn) ++sman;
            if(a[i]==minn) ++smin; 
        }
        //long long lala = sman*smin;
    
    printf("%d ", maxn-minn);
    if(maxn==minn) printf("%lld\n", n*(n-1)/2);
    else
    printf("%lld\n", sman*smin);

}