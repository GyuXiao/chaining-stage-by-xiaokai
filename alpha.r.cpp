#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int cmp(int a, int b)
{
    if(a>b) return 1;
    else return 0;
}

int main()
{
    int num,  cot=0, rslt=0;
    double sum = 0;
    int a[150];

    cin>>num;
    for(int i=0; i<num; i++)
    {
        cin >> a[i];
        sum += a[i];      
    }

    sort(a, a+num, cmp);

    for(int i=0; i<num; i++)
    {
        rslt += a[i];
        cot++;
        if(rslt > sum/2) break;  
    }
    cout << cot << endl;

}