#include<iostream>
#include<cstdio>
using namespace std;

long long  cuo(long long n)
{
    if(n==1) return 0;
    if(n==2) return 1;
    return (n-1)*(cuo(n-1)+cuo(n-2));
}

long long  func(long long  m)
{
    long long  i=1;
    for(long long j=1; j<=m; j++)
    i = i*j;
    m = i;
    return m;
}


int main()
{
    long long  num;
    scanf("%lld", &num);
    
        while(num--)
        {
            long long  N, M;
            scanf("%lld%lld", &N, &M);
            printf("%lld\n",func(N)/(func(N-M)*func(M))*cuo(M));
        }
    
}