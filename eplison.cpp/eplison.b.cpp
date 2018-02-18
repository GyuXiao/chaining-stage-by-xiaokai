#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int m,s;//位数 位数和
    while(scanf("%d%d", &m, &s)==2)
    {
        if(m==0 || m>1 && s==0 || s>9*m) printf("-1 -1\n");        
        else
        {
            for(int i=m, j=s; i; i--)
            {
                int k = max(0, j-9*(i-1));//求最小
                //能写出这样的句子，强！
                if(i==m && j && k==0) k=1;//不适用与一位数（除了1）,
                                    //保证n(n>1)位数最小(最高位为1)
                printf("%d",k);
                j -= k;
            } 
            printf(" ");

            for(int i=m, j=s; i; i--)
            {
                int k = min(9, j);//求最大
                printf("%d", k);
                j -= k;
            }           
            printf("\n");
        }
    
    }
}