//来自宏宏>_<(我真是垃圾)
#include <cstdio>

using namespace std;

int main()

{

    long long n;
    scanf("%lld", &n);

    long long sum = 0, base = 1, i = 1;

    while (base * 10 <= n)
        { 
            sum += i * (base * 9);
            ++i;
            base *= 10;
        }

            sum += i * (n - base + 1);

            printf("%lld\n", sum);

}