#include<cstdio>
#include<algorithm>
const int maxn = 100000+5;
int a[maxn];
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            for(int i=0; i<n; i++)
                {
                    scanf("%d", &a[i]);
                }
                int rslt = *max_element(a, a+n);
                printf("%d\n", rslt);
        }
}