#include<iostream>
#include<algorithm>
#indclude<string>

using namespace std;
int main()
{
    string str;
    int s[100];
    cin >> str;
    int idx = 0;
    for(int i=0; i<=str.length(); i++)
    {
        if(str[i]=='1' || str[i]=='2' || str[i]=='3') s[idx++] = str[i] - '0'; 
    }
    sort(s, s+idx);

    for(int j=0; j<(str.length()+1)/2; j++)
    {
       if(str.length()==1)
        {
            cout<<s[j]; break;
        }

        if(j==(str.length()+1)/2-1) cout<<s[j];
        if(str.length()>1 && j<((str.length()+1)/2-1))  cout<<s[j]<<"+";
    }
    cout<<endl;

}