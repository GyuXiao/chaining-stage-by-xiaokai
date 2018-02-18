#include<cstdio>
#include<cmath>
int main()
{
    int x1, y1, x2, y2;
    while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2)!=EOF)
    {
        if(y1!=y2 && x1!=x2 && fabs(x1-x2)!=fabs(y1-y2)) {puts("-1"); break;} 
        int x3, y3, x4, y4;
        int n;
        if(x1==x2) 
        {
            n = fabs(y1-y2);
            x3 = x4 = x1 + n;
            y3 = y1; y4 = y2;
        }
        else if(x1 != x2 && y1 == y2 )
        {
            n = fabs(x1 - x2);
            x3 = x1; x4 = x2;
            y3 = y4 = y1 + n;
        }
        else if (x1 != x2 && y1 != y2 && fabs(x1-x2)==fabs(y1-y2))
        {
            n = fabs(x1 - x2);
            x3 = x1; y3 = y2 ;
            x4 = x2; y4 = y1 ;
        }

    printf("%d %d %d %d\n", x3, y3, x4, y4 );
    }
}