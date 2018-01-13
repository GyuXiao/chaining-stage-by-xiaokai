#include<iostream>
using namespace std;
int main()
{
    int a, b, tot;
    cin >> a >> b;
    tot = a;
    while(a>=b)
    {
        tot += a/b;
        a = a/b + a%b; 
         
    }

    cout<<tot<<endl;

}