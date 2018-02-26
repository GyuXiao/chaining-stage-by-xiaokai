//果然，超时了>_<
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
const int maxn = 150005;
int a[maxn];
int b[maxn];

int main()
{
    int n, k;
    while(~scanf("%d%d", &n,&k))
        {
            map<int , int>td;
            memset(a, 0, sizeof(a));
            memset(b, 0, sizeof(b));            
            for(int i=0; i<n; i++)
                {
                    scanf("%d", &a[i]);
                }

                int sum = 0, j = 0;
                
                int c = k;

                    while(c<=n)
                        {
                            for(int m=j; m<c; m++)

                                {
                                    sum += a[m];
                                }
                                    b[j] = sum;
                                    td[b[j]] = j;
                                    j++; c++;  
                                    sum = 0; 
                            
                        }

                        int rslt = *min_element(b, b+(n-k+1));

                        printf("%d\n", td[rslt]+1);
        }

}