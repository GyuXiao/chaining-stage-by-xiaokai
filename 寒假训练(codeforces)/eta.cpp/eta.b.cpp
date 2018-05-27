//https://vjudge.net/contest/171211#problem/B codeforces496a
//来自宏宏，努力啊泽锴！
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn = 105;
int a[maxn];

int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            
            int  minn = 1001 , mann = 0 ; 
            for(int i=0; i<n; i++)
                { 
                    scanf("%d", &a[i]);
                   
                }

                for(int i=0; i<n; i++)
                    {
                        if(i!=0)
                        mann = max(mann, a[i]-a[i-1]);

                        if(i>=1 && i<=n-2)
                            minn = min(minn, a[i+1]-a[i-1]);

                    }
                    
                     minn = max(mann, minn);

           printf("%d\n", minn);



        }
}
