#include<iostream>
#include<cstdio>
using namespace std;
const int maxn = 100000+20;
int a[maxn];
int main()
{
    int num, c;
    scanf("%d%d", &num, &c);
    int cnt=1;
    int x=0,y=0; 
    for(int i=0; i<num; i++)
    {
        int mn;        
        scanf("%d", &mn);
        if(mn-x>c)
        y = 0;//厉害了大神
        y++;
        x = mn;

    }
    printf("%d\n", y);

}