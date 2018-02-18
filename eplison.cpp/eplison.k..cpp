//https://vjudge.net/contest/164709#problem/K codeforces474b
#include<cstdio>
using namespace std;
//using ll = long long;
const int maxn = 100000+10;
int a[maxn];

int find(int l, int r, int num)
{
    int mid = (l+r)/2;
    if(a[mid]>=num && num>a[mid-1]) return mid;
    if(a[mid]<num && a[mid+1]>=num) return mid+1;
    if(a[mid-1]>=num) return find(1, mid, num);
    if(a[mid+1]<=num) return find(mid, r, num);
}
int main()
{
    int n;
    scanf("%d", &n);
     
    for(int i=1; i<=n; i++)
        {
            int ai;
            scanf("%d", &ai);
            if(n==1) a[i] = ai;
            if(n>1) a[i] = ai + a[i-1]; 
        }
    int m;
    scanf("%d", &m);
    while(m--)
    {
        int q;
        scanf("%d", &q);
        printf("%d\n", find(0 , n , q));
    }
}