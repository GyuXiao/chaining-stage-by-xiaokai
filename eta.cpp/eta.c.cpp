#include<cstdio>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    char a='1', b='4';
    string s;
    while(cin >> s)
        {
            bool rslt = false;

            for(int i=0; i<s.length(); )
                {

                    if(s[i]==a && s[i+1]==b && s[i+2]==b)
                    {rslt=true; i+=3;}

                    else if(s[i]==a && s[i+1]==b) 
                    {rslt=true; i += 2;}

                    else if(s[i]==a) 
                    {rslt=true; i++;}
                    
                    else {rslt=false;break;}

                }

                puts((rslt?"YES":"NO"));

        }
}