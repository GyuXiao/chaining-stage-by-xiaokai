#include<iostream>

using namespace std;
int main()
{
    int a, b, c, num, sum=0;
    cin>> num;
    while(num--)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2) sum++;

    }cout<<sum<<endl;




    
}