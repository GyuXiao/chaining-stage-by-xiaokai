#include<cstdio>
#include<algorithm>
using namespace std;

//const int maxn = 4+2;
//int a[maxn];
int main()
{
    int a, b, c, d;
    long long rslt=0;
    scanf("%d%d%d%d", &a,&b,&c,&d);
        
            while(a && c && d)
                {
                    rslt += 256; a--; c--; d--;
                }
            while(a && b)
                {
                    rslt += 32; a--; b--;
                }
            
            printf("%lld\n", rslt);                
        
    
}