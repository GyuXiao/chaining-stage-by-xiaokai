#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //vector<int> a = {4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    int num; 
    int a[10]={4, 7, 47, 74, 447, 474, 477, 744, 747, 774};
    bool out = false;

    cin>>num;
    for(int i=0; i<10; i++)
    {
        if(num % a[i]==0) out = true; 
    }
    cout<<(out?"YES":"NO")<<endl;
     
}