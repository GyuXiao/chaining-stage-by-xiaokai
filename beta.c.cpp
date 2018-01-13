#include<iostream>
using namespace std;
int main()
{
    int inial;
    cin>>inial;
    int a, b, c, d;
    while(++inial)
    {
        a = inial % 10;
        b =  (inial/10)%10;
        c =  (inial/100)%10;
        d =  (inial/1000)%10;
        if(a!=b && b!=c && c!= d && a!=c && a!=d && b!=d) 

            break;
            
    }
    cout<<inial<<endl;
}