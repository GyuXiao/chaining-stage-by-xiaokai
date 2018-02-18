#include<string>
#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    string color = "CMY";
    bool rslt = false;
    for(int i=0; i<n*m; ++i)
    {
        char col;
        cin>>col;
        if(color.find(col) != -1) rslt= true;

    }  

    cout<<(rslt ? "#Color" : "#Black&White")<<endl;
}
