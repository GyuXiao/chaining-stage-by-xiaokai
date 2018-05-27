#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
using namespace std;
int main()
{
    vector<int>line;

    int a, b, c, aa, bb, cc, dd, ee, ff;
    cin>>a>>b>>c;
    aa = a+b+c;
    bb = a*(b+c);
    cc = (a+b)*c;
    dd = a*b*c;
    ee = a*b+c;
    ff = a+b*c;
    int mn[6]={aa,bb,cc,dd,ee,ff};

    printf("%d\n",*max_element(mn,mn+6));
//http://blog.csdn.net/caojiangxia/article/details/48175805
}