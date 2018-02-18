#include<cstdio>
using namespace std;

const int maxn = 1024;
int a[maxn];
int main()
{
    int n, m, k;

    while(scanf("%d%d%d", &n, &m, &k)==3)
    {
       // int cnt=0;
        for(int i=0; i<m; i++)
        scanf("%d", &a[i]);

        scanf("%d", &a[m]);
        int sum = 0;
        for(int j=0; j<m; j++)
        { 
            int num = a[j]^a[m];
            int cnt = 0;
            for(; num; num/=2)
            {
                if(num&1)
                cnt++;
            }
            if(cnt<=k)
            sum++;
            
        }

        printf("%d\n", sum);
    }
}