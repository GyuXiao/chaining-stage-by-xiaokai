#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num, cot=0; string s;
    cin>>num;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]!=s[i+1]) continue;
        if(s[i]==s[i+1]) cot++;
    
    }
    cout<<cot<<endl;
}