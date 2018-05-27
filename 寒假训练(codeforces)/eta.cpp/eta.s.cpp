#include<cstdio>
int main()
{
    int n;
    while(~scanf("%d",&n))
        {
            int num1 = (n-2)%7;
            int num2 = n%7;
            int mann, minn;
            mann = 2 + ((n-2)/7)*2;
            minn = (n/7)*2;

            if(n==1)
                {
                    mann = 1;
                    minn = 0;
                }

                    if(num2==6 )
                        minn++;
                        if(num1==6)
                        mann++;

                
                
            printf("%d %d\n", minn, mann);
        }
}