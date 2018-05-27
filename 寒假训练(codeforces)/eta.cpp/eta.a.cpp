#include<cstdio>
#include<cstring>
const int maxn = 105;
bool a[maxn];
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n))
        {

            memset(a, false, sizeof(a));

            for(int i=1; i<=n; i++)
                {
                    for(int j=1; j<=n; j++)
                        {
                            int num;
                                scanf("%d", &num);
                                if(num==1||num==3)
                                a[i]=true;
                        }
                }

                int cnt = 0;
                for(int i=1; i<=n; i++)
                    {
                        if(a[i]==false) cnt++;
                    }

                    printf("%d\n", cnt);

                    for(int i=1; i<=n; i++)
                        {
                            if(a[i]==false && i!=n) printf("%d ", i);
                            if(a[i]==false && i==n) printf("%d\n", i);
                        }
        }
}