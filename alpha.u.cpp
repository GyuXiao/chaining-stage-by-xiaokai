#include<iostream>
using namespace std;
int main()
{
    int n, i, j;
    int x, y;
    for( i=1; i<=5; i++)
        for( j=1; j<=5; j++)
        {
            cin>>n;
            if(n==1) 
            {
                x = i;
                y = j;
            } 
        }

        cout<< abs(x-3)+abs(y-3)<<endl;
}