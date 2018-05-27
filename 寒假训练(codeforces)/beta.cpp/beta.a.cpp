#include<iostream>
#include<string>
using namespace std;
int main()
{
    string ini;
    int n, t ;
    cin >> n >> t;
    
    cin>>ini;
    
    while(t--)
    {  
        for(int idx=0; idx < n; idx++)
        {
            if((char) ini[idx]=='B' && (char) ini[idx+1]=='G')
            {
                swap(ini[idx], ini[idx+1]);
                idx++;
            }
        }
    }

    for(int j=0; j<n; j++)
    {
        cout<<(char)ini[j];
    }
    cout<<endl;
}