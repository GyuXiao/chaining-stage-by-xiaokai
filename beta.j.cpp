#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ini;

    cin >> ini;
    
    while(ini.find("WUB")==0) ini = ini.substr(3);
    for(int a; a = ini.find("WUB"),a!=-1;)
    {
        if(a==ini.length()-3)  ini.erase(a,3);
         else  ini.replace(a,3," ");
    }

    cout<<ini<<endl;
    
} 