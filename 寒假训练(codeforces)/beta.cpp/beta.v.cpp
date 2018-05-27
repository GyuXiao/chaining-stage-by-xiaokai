#include<iostream>
using namespace std;
int main()
{
    //int i, j;
    int num, cnt=0;
    cin>>num;
    int a[120], b[120];
    for(int i=0; i<num; i++)
    {
        cin>>a[i];
        cin>>b[i];
    } 


    for(int i=0; i<num; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(a[i]==b[j]) cnt++;
            if(a[j]==b[i]) cnt++;
        }            
        
    }

    cout<<cnt<<endl;
}