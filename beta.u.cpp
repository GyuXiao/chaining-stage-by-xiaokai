#include<vector>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int cot = 1;

    vector<string>x;
    for(int i=0; i<num;i++)
    {
        string a;
        cin >> a;
        x.push_back(a);
    }

    for(int i=0; i<x.size() - 1; i += 1)//厉害了，宏操作
    {
        if(x[i]==x[i+1]) continue;
        else cot++;  
    }
    cout<<cot<<endl;


}