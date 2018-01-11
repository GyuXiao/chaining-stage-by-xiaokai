#include<iostream>
using namespace std;
int main()
{
    int num;
    while(cin>>num)
    {
        if(num==2 || (num%2)!=0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}