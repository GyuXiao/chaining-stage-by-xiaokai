#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=1e5+5;
int a[maxn], b[maxn];

int main()
{
    int na, nb;
    while(~scanf("%d%d", &na, &nb))
        {
            int k, m;
            scanf("%d%d", &k, &m);
                for(int i=1; i<=na; i++)
                        scanf("%d", &a[i]);

                    for(int j=1; j<=nb; j++) 
                        scanf("%d", &b[j]);

                        if(a[k]<b[nb-m+1]) puts("YES");
                        else puts("NO");
                    
        }
}