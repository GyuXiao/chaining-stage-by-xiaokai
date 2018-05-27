//https://vjudge.net/contest/164709#problem/U codeforces456a
#include<cstdio>
#include<iostream>
#include<algorithm>
const int maxn = 100000+5;
using namespace std;

struct laptop{
    int price;
    int quality;
}aa[maxn];

bool cmp(laptop a, laptop b)
    {
        return a.price < b.price;
    }

int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            for(int i=0; i<n; i++)
                {
                    scanf("%d%d", &aa[i].price, &aa[i].quality);
                }

                sort(aa, aa+n, cmp);
                bool rslt = false;

                for(int j=0; j<n; j++)
                    {
                        if(aa[j].price<aa[j+1].price && aa[j].quality>aa[j+1].quality)
                        {rslt = true;break;}        
                    }

                    puts((rslt?"Happy Alex":"Poor Alex"));
            
        }
    
}