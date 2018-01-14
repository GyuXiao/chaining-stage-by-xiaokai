#include<iostream>
using namespace std;
int main()
{
    int n, t,  j;
    cin >> n >> t;
    int a[100000];
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
    }

    bool rslt = false;
    for(int j=1; j<=t;)
    {
        j += a[j];
        if(j==t){rslt=true;break;}
         
    }
    cout<<(rslt?"YES":"NO")<<endl;
}