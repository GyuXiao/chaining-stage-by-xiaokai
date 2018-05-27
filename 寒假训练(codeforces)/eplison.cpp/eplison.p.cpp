#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100000+5;
int hour[maxn];
int minn[maxn];

int main()
{
    int n;
    int cnt = 1, rslt = 1;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        {
            scanf("%d%d", &hour[i], &minn[i]);
            if(i>1 && hour[i]==hour[i-1] && minn[i]==minn[i-1])
                {
                    ++cnt;
                    rslt = max(cnt, rslt);
                }
            else cnt = 1;

        }
        printf("%d\n", rslt);
}