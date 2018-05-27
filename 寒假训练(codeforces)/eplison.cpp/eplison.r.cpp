//https://vjudge.net/contest/164709#problem/R codeforces570a
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
using ll = long long;
const int maxn = 105;

int candidate[maxn][maxn];
ll a[maxn];

int main()
{
    int n, m;
    while(~scanf("%d%d", &n,&m))
    {     
        memset(candidate, 0, sizeof(candidate));
        memset(a, 0, sizeof(a));
    
        int winner=1;
    
    for(int i=1; i<=m; i++)
        { 
            for(int j=1; j<=n; j++)
                { 
                    scanf("%d", &candidate[i][j]);
                    if(candidate[i][winner]<candidate[i][j]) winner = j;
                }
                    a[winner]++;
                    winner = 1;  
        }

        
        int mx = 1;
        for(int i=1; i<=n; i++)
            if(a[mx]<a[i]) mx = i;       

        printf("%d\n", mx);
    }
}