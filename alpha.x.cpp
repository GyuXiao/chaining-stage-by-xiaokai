#include<iostream>
using namespace std;

int main()
{
    int p, q, cot=0;
    int num;
    cin >> num;
    for(int i=0; i<num; i++)
    {
        cin>>p>>q;
        if(q>=(p+2)) cot++;
    }
    cout<<cot<<endl;
}