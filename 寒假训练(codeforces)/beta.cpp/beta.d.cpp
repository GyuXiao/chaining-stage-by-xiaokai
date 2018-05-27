#include<algorithm>
#include<vector>
#include<iostream>
using namespace std;
int main()
{
    vector<int>pieces;
    int n, m, t;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> t;
        pieces.push_back(t);
    }

    sort(pieces.begin() , pieces.end());

    int nim = 1001;
    for(int i=0; i+n-1 < pieces.size(); i++)//一段与另一段的比较
    {
        nim = min(nim ,pieces[i+n-1]-pieces[i]);//技巧     
    }

    cout<<nim<<endl;


}
//http://blog.csdn.net/hanglinux/article/details/50156735
