//codeforces672a
#include<cstdio>
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s; 
    for(int i=1; i<400; i++)
        {
            s += to_string(i);
        }
    int n;

    while(~scanf("%d", &n))
        {
            cout<<s[n-1]<<endl;
        }

}