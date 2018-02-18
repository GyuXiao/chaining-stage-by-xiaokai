#include<cstdio>
#include<algorithm>
using namespace std;

struct student{
    int val, idx, pos;
}aa[2018];

bool cmp_less(student a, student b)
    {
        return a.val > b.val;
    }

bool cmp_greater(student x, student y)//细节！
    {
        return x.idx < y.idx;
    }

int main()
{
    int n;
    scanf("%d", &n);

        for(int i=0; i<n; i++)
            {
                scanf("%d", &aa[i].val);
                aa[i].idx = i;
            }

                sort(aa, aa+n, cmp_less);
                aa[0].pos = 1;
                int w = 1;

                    for(int i=0; i<n; i++)
                        {
                            if(aa[i].val==aa[i+1].val) 
                               {    aa[i+1].pos = aa[i].pos;
                                    w++;
                               }
                                else 
                                {
                                    w++;
                                    aa[i+1].pos = w;
                                } 
                        }

                sort(aa, aa+n, cmp_greater);//回到一开始的序列，

                for(int i=0; i<n; i++)
                    {
                        if(i!=n-1)
                            printf("%d ", aa[i].pos);
                        else 
                            printf("%d\n", aa[i].pos);
                    }
                
}