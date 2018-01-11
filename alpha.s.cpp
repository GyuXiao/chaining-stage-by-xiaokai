#include<iostream>
#include<string>
using namespace std;
int main()
{
    int cot = 0, cnt=0;
    string s;
    char a[] = "hello";
    bool out = false;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if((char)s[i]==a[cnt]) cnt++;
        else continue;
    }
    if(cnt==5) out=true;

    cout<<(out?"YES":"NO")<<endl;

    
}