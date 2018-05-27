#include<vector>
#include<iostream>
using namespace std;
int main()
{
   // vector<long long>x;
    long long n, k;
    cin>>n>>k;

    if(!(n%2) && k> n/2)
    cout<<2*(k-n/2)<<endl;

    if(!(n%2) && k<=n/2)
    cout<<2*k-1<<endl;

    if(n%2 && k>(n/2+1)) cout<<2*(k-n/2-1)<<endl;

    if(n%2 && k<(n/2+2)) cout<<2*k-1<<endl; 



}