#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[110];
int main()
{
    int n;
    scanf("%d", &n);
    
            memset(a, 0, sizeof a);
            for(int i=0; i<n; i++)
            scanf("%d", &a[i]);        
        if(n==1) {printf("0\n");}
        else {

            int t;
            int sum=0; int maxn =  *max_element(a, a+n);
            for(int j=0; j<n; j++)
            {
                sum += maxn - a[j];
            }
            printf("%d\n", sum );

        }
    
}