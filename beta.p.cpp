#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cot=1;
    while(n)
    {
        if(cot%m==0) n++;
        n--;
        cot++;
    }
    cout<<cot-1<<endl;

}