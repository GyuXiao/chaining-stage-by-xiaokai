#include<cstdio>
#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    bool rslt = false;

    for(int i=0; i<n; i++)

        {
            string s;
            cin >> s;
            int before, after;
            scanf("%d%d", &before, &after);
            if(before>=2400 && after>before) rslt = true;
        } 
            puts((rslt?"YES":"NO"));

}