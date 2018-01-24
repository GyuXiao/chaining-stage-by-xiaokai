#include<iostream>
#include<cstdio>
using namespace std;

long long cuo(long long num)
{
    if(num==1) return 0;
    if(num==2) return 1;
    return (num-1)*(cuo(num-1)+cuo(num-2));
}
long long  func(long long n)
{
    long long i=1;
    for(long long j=1; j<=n; j++)
    i = i*j;
    n = i;
    return n;
}
int main()
{
    long long num;
    scanf("%lld", &num);
    while(num--)
    {
        long long ans;
        scanf("%lld", &ans);
        double a = (double)cuo(ans) / func(ans);
        printf("%.2lf%%\n",a*100);
    }
}