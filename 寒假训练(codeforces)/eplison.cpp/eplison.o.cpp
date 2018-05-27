//https://vjudge.net/contest/164709#problem/O codeforces721A
#include<string>
#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int num;
    scanf("%d", &num);
    string s;
    cin >> s;
    int cnt = 0, cur = 0;
    string ans;

    for(char c : s)
    {
        if(c == 'B')
            cur++;
        else
            if(cur) {ans += to_string(cur); ans += ' '; cnt++; cur=0;} 
    }
        if(cur) {ans += to_string(cur); cnt++;}
        if(cnt == 0 ) printf("0\n");
        else 
        {
            printf("%d\n", cnt);
            cout<<ans<<endl;
        }

}