#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cot = -1;

    for(int i = 1; i * m <= n; ++i)
    {
        if(2 * i * m >= n) {cot = i * m; break;}//这一步！！
    }

    cout << cot << endl;
}