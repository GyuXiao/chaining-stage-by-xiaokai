#include<iostream>
#include<cctype>
using namespace std;
int main()
{
    string str;
    while(cin >> str)
    {
        string del = "aoyeui";
        for(int i=0; i<str.length(); i++)
        {
            if(del.find(tolower(str[i]))!=-1) continue;
            cout<<"."<<(char)tolower(str[i]);//加上(char)换为字符串
        }
        cout<<endl;
    }

}