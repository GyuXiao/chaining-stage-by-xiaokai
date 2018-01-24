#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
int som[15];
int main()
{
        int k;
        while(scanf("%d",&k)==1)
        {
            memset(som, 0, 12);
            
                for(int i=0; i<12; i++)
                {
                    int num;
                    scanf("%d",&num);
                    som[i] = num;         
                }
                sort(som, som+12);
                int sum = 0, tot=0;

                for(int i=11;i>=0;i--)
                {
                    sum += som[i];
                    tot++;
                    if(sum>=k) {break;}
                }
                if(k==0) printf("0\n");
                else if(tot==12 && sum<k) printf("-1\n");
                else
                printf("%d\n",tot);                   
        }
}