#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 1e4+4;
int f[maxn], t[maxn];
int main()
{
    int n, k;
    while(~scanf("%d%d", &n,&k))
        {
            for(int i=0; i<n; i++)
                {
                    scanf("%d%d", &f[i], &t[i]);
                    if(t[i]>k) f[i]=f[i]-t[i]+k;
                }
                    int rslt = *max_element(f,f+n);
                    printf("%d\n", rslt);
        }
}