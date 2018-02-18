#include<iostream> 
using namespace std;
int main()
{
    int n, k, s[60];
    cin>>n>>k;
    for(int i=0; i<n; i++)
    cin>>s[i];

    int a=0;
    for(int j=0; j<n; j++)
    {
        if(s[j]<=0 || s[j]<s[k-1]) break;
        a++;
    } 
    cout<< a <<endl;

}