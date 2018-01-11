#include<iostream>
#include<string>
using namespace std;
int main()
{
    int num;
    cin>>num;
    for(int i=0; i<num; i++)
    {
        string str;
        cin>>str;
        if(str.length()<=10) cout<<str<<endl;
        else cout<<str[0] <<str.length()-2 << str[(str.length()-1)]<<endl;
    }

}