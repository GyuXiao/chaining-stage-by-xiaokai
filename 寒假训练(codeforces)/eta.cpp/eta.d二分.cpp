//模拟 codeforces463b
//https://www.cnblogs.com/windysai/p/3947231.html
// 二分
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include<algorithm>
using namespace std;

const int maxn = 1e5 + 2;
int h[maxn], n;

bool check(int x)
{
    if (x - h[0] < 0)
        return false;

    int energy = x - h[0];
    
        for (int i = 0; i < n-1; i++)
            {
                energy += h[i] - h[i+1];
                if (energy < 0)
                return false;
            }

            return true;
}

int main()
{
    while (scanf("%d", &n) != EOF)
        {

            for (int i = 0; i < n; i++)
                scanf("%d", &h[i]);

                    int l = 1, r = maxn;
                    int ans = maxn;
                        while (l <= r)
                            {
                                int m = (l+r)>>1;
                                if (check(m))
                                    {
                                        ans = min(ans, m);
                                        r = m - 1;
                                    }
                                else
                                        l = m + 1;
                            }

                printf("%d\n", ans);
        }
        
}