#include<cmath>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int n, m, rslt;
    cin >> n >> m;
    rslt = min(n , m);
    if(rslt %2 == 0) cout<<"Malvika"<<endl;
    if(rslt % 2 == 1) cout<<"Akshat"<<endl;
}