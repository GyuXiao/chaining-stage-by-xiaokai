#include<algorithm>
#include<iostream>
using namespace std;
#define maxn 5050
int main()
{
    int A[maxn]; int B[maxn]; int C[maxn];
    int num, a=0, b=0, c=0, ant=0, bnt=0, cnt=0;
    cin>>num;
    for(int i=1; i<=num; ++i)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            A[a]=i;
            a++;
            ant++;
        }
        else if(x==2)
        {
            B[b]=i;
            b++;
            bnt++;
        }
        else if(x==3)
        {
            C[c]=i;
            c++;
            cnt++;
        }
    }
        int yy = min(ant, bnt);
        int xx = min(yy , cnt);

            cout<<xx<<endl;
            if(xx)
            {

                for(int j=0; j<xx; j++)
                {
                    cout<<A[j]<<" "<<B[j]<<" "<<C[j]<<endl;
                }
            }
 
    
}