#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
   // string s;
    int num;
    cin >> num;
    map<string , int>regits;

    while(num--)
    {
        string s;
        cin >> s;
        if(regits[s] != 0) cout << s << regits[s]++ <<endl;

        else
        {  cout << "OK" << endl;
           regits[s] = 1;
        }

    }

}