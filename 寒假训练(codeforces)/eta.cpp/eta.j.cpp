//https://vjudge.net/contest/171211#problem/J codeforces573a
//也可以不用set
#include<cstdio>
#include<set>
#include<algorithm>
#include<cstring>
using namespace std;
const int maxn = 1e5+5;
int a[maxn];
int main()
{
    set<int>st;
    int n;
    while(~scanf("%d",&n))
        {
            st.clear();
            memset(a, 0, sizeof(a));

            for(int i=0; i<n; i++)
                {
                    scanf("%d", &a[i]);
                    while(a[i]%2==0) a[i] /= 2;
                    while(a[i]%3==0) a[i] /= 3;
                    st.insert(a[i]);
                }

                bool rslt = false;
                if(st.size()==1)
                rslt = true;

                puts((rslt ? "Yes" : "No"));
        }

}