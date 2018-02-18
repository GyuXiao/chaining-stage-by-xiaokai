#include<iostream>
#include<string>
using namespace std;
int main()
{
    bool out = false;
    string s;
    cin >> s;
    string v = "HQ9";
    for(char c : s)//c 会取遍 s 中每一个字符
    {
        if(v.find(c)!=-1) 
        {out = true;break;}
    }
    cout<<( out ? "YES" : "NO")<<endl;

}