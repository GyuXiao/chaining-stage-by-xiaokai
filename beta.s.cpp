#include<iostream>
#include<algorithm>
#include<string>
#include<string.h>
#include<vector>
#include<queue>
#include<deque>
#include<cmath>
#include<map>
#include<set>
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
    int x, y=1, tat;
    scanf("%d",&x);
    int cot = 0;
    if(x<=5) printf("%d",y);

    if(x>5)
    {
        tat = x / 5; 
        if(x%5) tat += 1;;
            printf("%d",tat);
    }  
    
}