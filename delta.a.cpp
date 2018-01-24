#include<iostream>
using namespace std;
int main()
{
    int n, sum; 
    while(cin>>n)
    {

        sum = 1;
        for(int i=1,j=n-1; i<n; i++,j--)
        {
            sum += (1+j*i);
        }
    
        cout<<sum<<endl;

    }
}//这道题证明你很弱！


