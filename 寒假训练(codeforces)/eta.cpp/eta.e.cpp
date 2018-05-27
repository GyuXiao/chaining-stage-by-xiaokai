//codeforces 570b
//宏
#include<cstdio>
#include<cmath>
using namespace std;
int main()

{

    int n, m; scanf("%d%d", &n,&m);


    if (n == 1)
        printf("%d\n", 1);
        
    else

    {

        int ans = (m - 1 >= n - (m + 1) + 1 ? m - 1 : m + 1);

        printf("%d\n", ans);

    }

}