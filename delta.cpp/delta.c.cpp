#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n, k, cot=0;

    cin>>n>>k;
    
        vector<int>s;        
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            s.push_back(x);
        }
        for(int j=0; j<s.size();j++)
        {
            if(s[j]+k<=5) cot++;
        }
        cout<<cot/3<<endl;

    
    

}