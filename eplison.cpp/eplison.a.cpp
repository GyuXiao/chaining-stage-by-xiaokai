#include<bits/stdc++.h>

using namespace std;
int main()
{
    int num;
    cin>>num;
    while(num--)
    {
        int t;
        cin>>t;
        if(!(360%(180-t)) && t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}