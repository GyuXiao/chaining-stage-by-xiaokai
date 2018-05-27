#include<iostream>
using namespace std;

int isgreat(int n, int m)
{
    int max, min;

    if(n<m) {max=m;min=n;}
    else {max=n; min=m;}
    int b = min;
    while(b)
    {
        b = max % min;
        max = min;
        min = b;
    }
    return max;
}

int main()
{

    int a, b, k;
    cin>>a>>b>>k;
    while(k>=0)
    {
    
         if(k <isgreat(a,k)){cout<<"1"<<endl;break;}//(1)
        k -= isgreat(a,k);
       
        if(k < isgreat(b,k)){cout<<"0"<<endl;break;}//(2)
        k -= isgreat(b,k);
    }
//(1)和（2）真没想到

}