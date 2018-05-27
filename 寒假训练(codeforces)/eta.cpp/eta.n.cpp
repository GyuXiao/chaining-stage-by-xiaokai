#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a, b, c;
    while(~scanf("%d%d%d",&a,&b,&c))
        {
            int rslt = min(a , b/2);
                rslt = min(rslt , c/4);
                printf("%d\n", rslt*7);
        }
}