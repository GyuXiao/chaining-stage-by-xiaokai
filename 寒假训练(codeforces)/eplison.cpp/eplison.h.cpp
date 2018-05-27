#include<iostream>  
#include<cmath>  
#include<cstdio>  
#include<map>  
#include<set>  
#include<cstring>  
#include<string>  
#include<algorithm>  
//#define min 1e-6  
using namespace std;  
#define PrimeMax 1000000  
bool Prime[PrimeMax+1];  
void IsPrime()  
{  
    memset(Prime,true,sizeof(Prime));  
    Prime[1]=Prime[0]=false;  
    int n = PrimeMax, m = sqrt(PrimeMax);

    for(int i=2; i<=m; i++)  
        if(Prime[i])  
            for(int j=i*i; j<=n; j+=i)  
                Prime[j]=false;  
}

int main()  
{  
  
    IsPrime();  
    int N;  
    scanf("%d", &N);  
    while(N--)  
    {  
        long long n;  
        scanf("%lld", &n);  
        long long m = sqrt(n);  
        if((m*m==n)&&Prime[m])  
            puts("YES");  
        else  
            puts("NO");  
    }  
    return 0;  
}  