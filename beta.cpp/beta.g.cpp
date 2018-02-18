#include<vector>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    vector<int>line;
    int num;
    cin>>num;

    for(int i=0; i<num; i++)
    {
        int t;
        cin>>t;
        line.push_back(t);
    }

    int tot = 1, rslt = 1;

    for(int j=0 ; j<line.size()-1 ; j++)//-1这一步很重要
    {
        if(line[j] <= line[j+1])
        tot++; 
        else {tot=1; continue;}
        rslt = max(rslt,tot);
            
    }
    cout<<rslt<<endl;

}