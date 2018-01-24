#include<iostream>
using namespace std;
int main()
{
    int n, sum1=0, sum2=0, sum3=0;

    cin>>n;

    for(int i=0; i<n; i++)
    {
        int k;
        cin>>k;
        sum1 += k;
    }

    for(int i=0; i<n-1; i++)
    {
        int k;
        cin>>k;
        sum2 += k;
    }

    for(int i=0; i<n-2; i++)
    {
        int k;
        cin>>k;
        sum3 += k;
    }       

    cout<<sum1-sum2<<endl;
    cout<<sum2-sum3<<endl; 

}
