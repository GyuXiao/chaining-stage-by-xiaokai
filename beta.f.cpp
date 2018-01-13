//新题

#include<iostream>
using namespace std;
int main()
{
    int a[200];
    int num;
    cin>>num;
    for(int i=1; i<=num; i++)
    {
        int t; cin>>t;
        a[t]=i;//好好体会
    }
    for(int j=1; j<=num; j++)
    {
        if(j!=1) cout<<" ";
        cout<<a[j];
    }
    cout<<endl;

}