
#include<set>
#include<iostream>
using namespace std;
int main()
{
    set<char>s;
    char ch;
    while(cin>>ch )
    {
        if(ch !='{' && ch!='}' && ch!=',')
        s.insert(ch);
     }

    cout << s.size() << endl;

}
