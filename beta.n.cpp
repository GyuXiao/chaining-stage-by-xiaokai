#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i=1;
    for( ;n > 5 * i; i *= 2)
    n = n - 5 * i;

    if(n%i) n = n/i+1;
    else n /= i;

    switch(n)
    {
        case 1: cout<<"Sheldon"<<endl;break;
        case 2: cout<<"Leonard"<<endl;break;
        case 3: cout<<"Penny"<<endl;break;
        case 4: cout<<"Rajesh"<<endl;break;
        case 5: cout<<"Howard"<<endl;
    }

}