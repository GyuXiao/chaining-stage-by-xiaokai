#include<iostream>
using namespace std;
int main()
{
    int a1, a2, a3;
    int b1, b2, b3;
    int num;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>num;
    int sum1 = a1 + a2 + a3;
    int sum2 = b1 + b2 + b3;

    int sum = sum1/5+((sum1%5)?1:0) + sum2/10+((sum2%10)?1:0);
    if(sum<=num) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



}