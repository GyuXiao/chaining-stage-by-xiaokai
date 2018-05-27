#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,d;
    while(~scanf("%d%d%d%d", &a,&b,&c,&d))
        {

            int rslt1, rslt2;

            rslt1 = max(3*a/10 , a-a/250*c);
            rslt2 = max(3*b/10 , b-b/250*d);

                if(rslt1>rslt2) puts("Misha");
                if(rslt1<rslt2) puts("Vasya");
                if(rslt1==rslt2) puts("Tie");

        }
}