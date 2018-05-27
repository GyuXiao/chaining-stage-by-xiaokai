//https://vjudge.net/contest/164709#problem/V codeforces621a
#include<cstdio>
#include<algorithm>
using namespace std;
using ll = long long;
//思路：在输入阶段统计所有的和，并更新最小的奇数，
//如果最后和为偶数的话，直接输出；如果和为奇数，减去最小的奇数即可。
int main()
{
    int n;
    ll cnt_odd=0, even=0, odd=0, min_odd=1000000000000;
    while(~scanf("%d", &n))
        {
            while(n--)
                {
                    ll cur;
                    scanf("%lld", &cur);
                        if(cur%2)
                        {
                            cnt_odd++;
                            odd += cur;
                            min_odd = min(cur, min_odd);
                        }
                        else even += cur;
                }

                if(cnt_odd%2) odd -= min_odd;
                else odd -= 0;
                
                printf("%lld\n", even+odd);
            

        }
}