#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    int cot=0;
    int idx=0;
    string s; cin>>s;
    bool find = true;
    for(int i=0; i<s.length(); i++)
    {
        if(find==isupper(s[i])) cot++;
    }

    if(cot == s.length())
    for(int j=0; j<s.length(); j++)
    {
        cout<<(char) tolower(s[j]);
    }

    else if(find!=isupper(s[idx]) && cot == s.length()-1)
    {
        for(int a=0; a<s.length(); a++)
        {
            if(a==0) cout<<(char)toupper(s[a]);
            else
            cout<<(char)tolower(s[a]);
        }
    }

    else if(s.length()==1 && find!=isupper(s[idx]))
   { 
       cout<<(char)toupper(s[0]);
   }

    else
    cout<<s;
    cout<<endl;




}