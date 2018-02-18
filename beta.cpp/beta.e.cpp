#include<string>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    bool rslt = false;
    string s1, s2;
    cin >> s1 >> s2;
    
    for(int i=0, j=s2.length()-1; i<s1.length(),j>=0; i++,j-- )
    {
        if(s1[i]!=s2[j]) rslt=true; 
    }

    cout<<(rslt?"NO":"YES")<<endl; 
}