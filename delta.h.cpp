#include<iostream>
using namespace std;
int main()
{
    int num, pol=0, sum=0;

    cin>>num;
    for(int i=0; i<num; ++i)
    {
        int t; cin>>t;
        if(t>0)
        pol += t;

        else if(pol >= -t )
        pol += t;

       else{
           pol =0;
           sum -= t;
       } 
    }
    cout<<sum<<endl;

}