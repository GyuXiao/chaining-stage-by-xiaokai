#include<iostream>
#include<string>
using namespace std;
int main()

{
    int num,sum=0; cin >> num;
    string s; //s.resize(3);如果用for循环的话，要加上这一句
    while(num--)
    {
        cin >> s;
        //for(int i=0; i<3; i++)
        //{
          //cin >> s[i];  
        //}
      
        if(s.find('+')!=-1) sum++;
        else sum--;

    }
    cout<<sum<<endl;
}