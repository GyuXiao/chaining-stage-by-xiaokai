#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
   string s1, s2;
   while(cin>>s1>>s2)
        {
            
            if(s1!=s2)
            printf("%d\n", max(s1.length() , s2.length()));

            else 
            printf("-1\n");
        } 
}