#include<iostream>
using namespace std;
int main()
{
    int n, k, cot=0;
    cin>>n>>k;
    
    for(int i=1; i<=n; ++i)
    {
        
            if((!(k%i)) && k/i<=n ) cot += 1;

    }

    cout<<cot<<endl;


}