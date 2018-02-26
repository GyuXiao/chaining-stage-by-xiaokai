#include<cstdio>
using namespace std;


int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            int sum1=0, sum2=0, sum3=0;
            for(int i=1; i<=n; i++)
                {
                    int num;
                    scanf("%d", &num);
                    if((i+2)%3==0) sum1 += num;
                    else if((i+1)%3==0) sum2 += num;
                    else if(i%3==0) sum3 += num;
                }

                if(sum1>sum2 && sum1>sum3) puts("chest");
                if(sum2>sum1 && sum2>sum3) puts("biceps");
                if(sum3>sum1 && sum3>sum2) puts("back"); 
        }
}