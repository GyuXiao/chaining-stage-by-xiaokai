//https://vjudge.net/contest/164709#problem/T codeforces733a
#include<cstdio>
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
const int maxn = 110;
int idx[maxn];
using namespace std;
int main()
    {
        int j, i;
        string s;
        cin >> s;
        s += 'A';
        for(j=0, i=0; i<s.length(); i++)
            {
                if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y')
                { 
                    idx[j] = i;
                    j++;
                } 

            }

            int mann;
            for(int k=0; k<j; k++)
                {
                    if(k==0) mann = idx[k]+1; 
                    else
                    mann = max((idx[k]-idx[k-1]) , mann);

                }
                
                printf("%d\n", mann);


    }
