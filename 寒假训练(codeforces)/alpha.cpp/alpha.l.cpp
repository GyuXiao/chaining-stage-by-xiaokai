#include<iostream>
#include<algorithm>
using namespace std;
int cnt[4];
int main()
{
    int num;
    cin >> num;
    while(num--)
    {
        int t;
        cin >> t;
        ++cnt[t];
    }

    int rslt = 0;
    rslt += cnt[4];
    rslt += cnt[3]; cnt[1] -= min(cnt[3], cnt[1]);
    rslt += cnt[2]/2; rslt +=  cnt[2]%2; cnt[1] -= min((cnt[2]%2)*2, cnt[1]);
    rslt += cnt[1]/4; rslt += (cnt[1]%4)?1:0 ;

    cout<<rslt;
}