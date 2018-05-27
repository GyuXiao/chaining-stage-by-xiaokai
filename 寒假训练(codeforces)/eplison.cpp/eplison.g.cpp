#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int n, d;
    bool rslt = false;
    scanf("%d%d", &n, &d);
    
        int k = n;
        int sum = 0;
        while(k--)
        {
            int num;
            scanf("%d", &num);
            sum += num;
        }

        if((sum+10*(n-1))<=d) rslt = true;
        int end = (d-sum)/5;
        printf("%d\n", (rslt ? end : -1 ) );
        
    

}