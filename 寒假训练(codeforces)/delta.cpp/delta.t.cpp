#include<cmath>
#include<algorithm>
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a, b, c;
    //cin>>a>>b>>c;
    scanf("%d%d%d", &a, &b, &c);
    int ant, bnt, cnt, dnt;
    ant = 2*(a+b);
    bnt = a+b+c;
    cnt = 2*(b+c);
    dnt = 2*(a+c);
    ant = min(ant,bnt);
    cnt = min(ant,cnt);
    dnt = min(cnt, dnt);
    printf("%d\n", dnt);
     //cout<<dnt<<endl;
}