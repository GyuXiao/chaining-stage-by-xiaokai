#include<cmath>
#include<iostream>
using namespace std;
bool isprime(long n)
{
    int i;
    for( i=2; i<=floor(sqrt(n)+0.5); i++)
    {
        if(!(n%i)) break;
    }
    return i>floor(sqrt(n)+0.5);

}

int main()
{
    long num;
    cin>>num;
    long a = num/2;
    long b = num/2 + num%2;

        while(isprime(a) || isprime(b)) //while循环还能这么玩
        {
            a--;
            b++;
        }

    cout<<a<<" "<<b<<endl;

}