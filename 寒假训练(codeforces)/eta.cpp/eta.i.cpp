//https://vjudge.net/contest/171211#problem/I codeforces401a
//还是不太理解
#include<cstdio>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int n, m, sum=0;
    while(~scanf("%d%d", &n,&m))
        {
            
            for(int i=0; i<n; i++)
                {
                    int num;
                    scanf("%d", &num);
                    sum += num;
                }
                //int a = abs(sum) % m ? 1 : 0; 
                printf("%d\n",abs(sum)/m + (abs(sum)%m?1:0));//括号注意！
        }
}