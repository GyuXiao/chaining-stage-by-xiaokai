#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int cot = 0;  
    string s;
    cin >> s;
    sort(s.begin() , s.end());
    char one = ' ';
    for(char fir : s)
    {
        if(fir != one) cot++;
        one = fir;//神来之笔

    }
    if(!(cot%2)) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

}