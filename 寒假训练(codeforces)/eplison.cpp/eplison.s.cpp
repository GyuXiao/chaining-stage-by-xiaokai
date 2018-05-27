#include<cstdio>
#include<algorithm>
using namespace std;

struct card
    {
        int val;
        int idx;
    }cards[110];

bool cmp(card a, card b)
    {
        return a.val < b.val;
    }


int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        for(int i=0; i<n; i++)
            {
                scanf("%d", &cards[i].val);
                cards[i].idx = (i+1);
            }
            sort(cards, cards+n, cmp);

            for(int i=0; i<n/2; i++)
                {
                    printf("%d %d\n", cards[i].idx, cards[n-i-1].idx);
                }
            
    }
}