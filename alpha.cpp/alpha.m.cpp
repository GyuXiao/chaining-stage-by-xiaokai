#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int num,  aft=0, rslt=0;
    cin>>num;
    while(num--)
    {
        int a, b;
        cin>>a>>b;
        aft += (b-a);

        rslt = max(aft , rslt);
        
    }
    cout<< rslt <<endl;
}
