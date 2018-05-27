//https://vjudge.net/contest/164709#problem/L codeforces515a
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
using ll = long long; 
int main()
{
    int a, b, rslt1, rslt2;

    ll s;
    scanf("%d%d%lld", &a, &b, &s);
    rslt1 = abs(a);
    rslt2 = abs(b);

    if( s>(rslt1 + rslt2) && (s - rslt1 - rslt2) % 2 == 0 || rslt1 + rslt2==s) puts("Yes");
    else puts("No");
    

}