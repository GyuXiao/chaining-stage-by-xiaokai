#include<algorithm>
#include<iostream>
using namespace std;

int main()
{
    int mmp = 200;
    int num, sum=0;
    cin >> num;
    while(num--)
    {
        int a, p;
        cin >> a >> p;
        mmp = min(p , mmp);
        sum += mmp * a;

    } 
    cout<<sum<<endl;
}
