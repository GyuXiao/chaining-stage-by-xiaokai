//https://vjudge.net/contest/164709#problem/N codeforces489b
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()

{

    vector<int> boys, girls;
    int n; cin >> n;
    while (n--)
    {
        int t; cin >> t;
        boys.push_back(t);
    }

    int m; cin >> m;
    while (m--)
    {
        int t; cin >> t;
        girls.push_back(t);
    }

    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());

    int ans = 0;

    for (int i = 0; i < boys.size(); ++i)
    {
        for (int j = 0; j < girls.size(); ++j)
        {
            if (abs(boys[i] - girls[j]) <= 1)
            {
                ++ans;
                girls[j] = 1000;
                break;
            }
        }
    }
    cout << ans << endl;
}