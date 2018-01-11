#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    bool rslt = false;
    cin>>s;
    
    if(s.find("1111111")!=-1  || s.find("0000000")!=-1)//数字的话用双引号
     rslt = true;
    if(rslt) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}