#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 3003;
int a[maxn];

int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            memset(a, 0, sizeof(a));
            int mm = 0;
            for(int i=0; i<n; i++)
                {
                    scanf("%d", &a[i]);
                    mm += a[i];
                }
                    
                    sort(a, a+n);
                    int sum =0;

                    for(int j=1; j<n; j++)
                        {

                            while(a[j]<=a[j-1])
                                {
                                    a[j]++;
                                    sum++;
                                }     
                                                
                        }
                
                                printf("%d\n", sum);
        }

}