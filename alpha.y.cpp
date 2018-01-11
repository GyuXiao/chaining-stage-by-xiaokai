#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int>L={4, 7, 47, 74, 447, 474, 477, 744, 747, 774};

int main()
{
    int cot = 0;    
    long long  num;
    cin >> num;
    do{
        long long num1;
        num1 = num % 10;
        if(num1==4 || num1==7)
        cot++;
    }while(num /= 10);

    bool ant = false;
    for(int rslt : L)
    {
        if(cot==rslt) ant = true; 
    }
    cout<<(ant ? "YES" : "NO")<<endl;

}