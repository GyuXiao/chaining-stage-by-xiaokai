//https://vjudge.net/contest/164709#problem/W codeforces478b
#include<cstdio>
using namespace std;
using ll = long long;
ll func(ll a)
{
    ll rslt = a*(a-1)/2;
    return rslt;
}

int main()
{
    ll n, m;
    scanf("%lld%lld", &n, &m);
    ll mann = func(n-(m-1));
    ll minn = (m-n%m)*func(n/m) + (n%m)*func(n/m+1);

    printf("%lld %lld\n" , minn, mann);
}