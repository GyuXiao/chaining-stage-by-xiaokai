#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> x;
    int num;
    cin>>num;

    for(int i=0; i<2; i++)
    {
        int p;
        cin>>p;
        for(int j=0; j<p;j++)
        {
            int t;
            cin >> t;//不要忘！！！！！
            x.push_back(t);
        }
    }

    bool rslt = true;
    for(int a=1; a <= num ; a++)
    {
        bool find = false;
        for (int s = 0; s < x.size(); s++)
        {
            if (x[s] == a){ find = true;break;}
        }
        if (!find) {rslt = false;break;}
    }



    cout<<(rslt?"I become the guy.":"Oh, my keyboard!")<<endl;

}