#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 1e5+5;
int a[maxn];
int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            int cnt = 1, rslt = 1;
            for(int i=0; i<n; i++)
                scanf("%d", &a[i]);

            for(int j=0; j<n-1; )
                {
                    
                    if(a[j]<a[j+1]) {++cnt;++j;}
                    else 
                        {
                            
                            cnt = 1;
                            ++j;
                        }
                        rslt = max(rslt, cnt);
                //printf("%d ", cnt);        
                }

                printf("%d\n", rslt);
        }
}