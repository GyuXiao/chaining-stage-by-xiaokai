#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
const int maxn = 100000+10;
int a[maxn];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++ )
    scanf("%d", &a[i]);

    int minn, maxn;
    for(int j = 0; j < n; j++)
    {
        if(j==0){
            minn = fabs(a[j] - a[j+1]);
            maxn = fabs(a[j] - a[n-1]);
        }
        else if(j==n-1)
        {
            minn = fabs(a[j-1] - a[j]);
            maxn = fabs(a[j] - a[0]);
        }
        else{
        minn = min(fabs(a[j] - a[j-1]) , fabs(a[j] - a[j+1]));
        maxn = max(fabs(a[j] - a[0]) , fabs(a[j] - a[n-1]));
                   
        }
        printf("%d %d\n", minn, maxn); 
                
    }
  

}