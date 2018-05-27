#include<cstdio>
int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            int c=0;
            while(n--)
                {
                    int m;
                    scanf("%d", &m);
                    c = m>c ? m : c;
                }
                printf("%d\n", c);
        }
}