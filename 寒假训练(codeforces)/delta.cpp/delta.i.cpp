#include<iostream>
using namespace std;
int main()
{
    int num, cot=0, ant=0;
    cin>>num;
    while(num--)
    {
        int k1, k2;
        cin>>k1>>k2;
        if(k1>k2) ++cot;
        if(k1<k2) ++ant;

    }
    if(cot>ant) cout<<"Mishka"<<endl;
    if(cot<ant) cout<<"Chris"<<endl;
    if(cot==ant) cout<<"Friendship is magic!^^"<<endl;

}