#include<iostream>
using namespace std;

int a[12][12];

int main()
{
    int n, i, j;
    while(cin>>n)
    {
        for( i=1; i<=n; i++)
        {
            for( j=1; j<=n; j++)
            {
                if(i==1 || j==1) a[i][j]=1;
                else a[i][j] = a[i][j-1] + a[i-1][j];
            }
        }
        cout<<a[i-1][j-1]<<endl;//细节！！循环结束时i=i+1！
    }
}