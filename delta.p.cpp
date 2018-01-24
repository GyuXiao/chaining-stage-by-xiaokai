#include<iostream>
using namespace std;
using ll = long long ;

int countones(ll  n)
{
    ll ones = 0;
    while(n>0)
    {
        ones += (1&n);
        n >>= 1;
    }
    return ones;

}
// ll func(ll  a)
// {
//     ll  base = 1; ll sum = 0;
//     ll c = a;
//     while(a)
//     {
//         ll  b = c % 2;
//         a /= 2;
//         c = a;
//         sum += ( base * b );
//         base *= 10;
//     }
//     return sum;

// }

int main()
{
    ll num;
    cin >> num;
    //cout<<func(num)<<endl;
    cout<<countones(num)<<endl;
}