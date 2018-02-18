#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {
        if(islower(s[0])) s[0]=toupper(s[0]);
        cout<<(char)s[i];
    }
}