//宏宏写的，666666
#include <iostream>
#include<cstdio>
using namespace std;



int main()

{

    int n, k; 
    scanf("%d%d", &n,&k);
     

        int sum[n + 1]; sum[0] = 0;

        for (int i = 1; i <= n; ++i)

            {

                int t; cin >> t;
                sum[i] = sum[i - 1] + t;

            }

                int idx, mn = 1e9;

                for (int i = 1; i + k - 1 <= n; ++i)

                    {

                        int adds = sum[i + k - 1] - sum[i - 1];
                        if (adds < mn) mn = adds, idx = i;

                    }

                        printf("%d\n",idx);
    
}