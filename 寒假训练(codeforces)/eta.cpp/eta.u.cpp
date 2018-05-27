#include<cstdio>
#include<map>
#include<algorithm>
//https://vjudge.net/contest/171211#problem/U codeforces450
#include<cstring>
#include<queue>
using namespace std;


struct child
    {
        int idx, want, acquire;
    };

queue<child>td;    

int func(int m)
    {
        
        for(int i=1; i<=m; i++)
            {
                int k;
                scanf("%d", &k);
                child cur = {i, k, 0};
                td.push(cur);
            }
    }

int main()
{
    
    int n, k;
    
    while(~scanf("%d%d",&n,&k))
        {
            func(n);
            
            while(td.size()!=1)
                {
                    child num = td.front();
                    td.pop();
                    num.acquire += k;

                    if(num.acquire < num.want)
                        td.push(num);

                }

            printf("%d\n", td.front().idx);
            
        }
}