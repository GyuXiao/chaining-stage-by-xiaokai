#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string  aft;

    bool rslt = false;
    while(n--)
    {
           // bool rslt = false;
        string ini;        
        cin >> ini;
        if(!rslt) 
        {
           
           int  mn = ini.find("OO");
           if(mn != -1)
           {
                ini.replace(mn, 2, "++");
                rslt = true;        
           }            
        }
            aft += ini;
            aft += '\n';
          
    }
    cout<<(rslt ? "YES\n" + aft : "NO\n");
}//代码来自宏宏


