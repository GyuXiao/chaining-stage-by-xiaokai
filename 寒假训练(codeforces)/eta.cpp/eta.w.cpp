#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 0x3f3f3f3f;
int n, a[2010], ans, tem;

void dfs(int k)
    {
        tem++;
        if(a[k]==-1)
            return ;
            dfs(a[k]);
    }

void solve()
    {
        ans = -maxn;
        for(int i=1; i<=n; i++)
            {
                tem = 0;
                dfs(i);
                ans = max(ans , tem);
            }
        printf("%d\n", ans);
    }

int main()
{
    while(~scanf("%d", &n))
        {
            for(int i=1; i<=n; i++)
                {
                    scanf("%d", &a[i]);
                }
                solve();
        }
}    