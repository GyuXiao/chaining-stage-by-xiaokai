//codeforces384a
#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int n;
    while(~scanf("%d", &n))
        {
            if(n==1)
            {
                  printf("%d\n",1);
                  puts("C");
            }
              else 
                {
                    if(n%2==0)
                        {
                            printf("%d\n", n*n/2);
                            for(int i=1; i<=n; i++)
                                for(int j=1; j<=n; j++)
                                    {
                                        if(i%2)
                                            {
                                                if(j%2) printf("C");
                                                if(j%2==0 && j!=n) printf(".");
                                                if(j==n) printf(".\n");
                                            } 
                                        if(i%2==0)
                                            {
                                                if(j%2) printf(".");
                                                if(j%2==0 && j!=n) printf("C");
                                                if(j==n) printf("C\n");
                                            }                                             
                                    }
                        }
                        else 
                        {
                            printf("%d\n",(n*n+1)/2);
                            for(int i=1; i<=n; i++)
                                for(int j=1; j<=n; j++)
                                    {
                                        if(i%2)
                                            {
                                                if(j%2 && j!=n) printf("C");
                                                if(j%2==0) printf(".");
                                                if(j==n) printf("C\n");
                                            }
                                        if(i%2==0)
                                            {
                                                if(j%2 && j!=n) printf(".");
                                                if(j%2==0) printf("C");
                                                if(j==n) printf(".\n");                                                
                                            }
                                    }
                        }
                }  

        }

}