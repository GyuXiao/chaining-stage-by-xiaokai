#include<string>
#include<iostream>
using namespace std;
 string ini = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{

    char c; cin >> c;
    string s;
    cin >> s;
    if(c=='R')
    {
        for(char ch : s)
        {
            ch =ini[ini.find(ch)-1];
            cout<<ch;
        }
        cout<<endl;
        
    }

    if(c=='L')
    {
        for(char ch : s)
        {
            ch = ini[ini.find(ch)+1];
            cout<<ch;
        }
        cout<<endl;
    }

}