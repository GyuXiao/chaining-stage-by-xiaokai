#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;

int white(char c)
{
    if(c=='Q') return 9;
    if(c=='R') return 5;
    if(c=='N') return 3;
    if(c=='B') return 3;
    if(c=='P') return 1;
    if(c=='K') return 0; 
}

int black(char c)
{
    if(c=='q') return 9;
    if(c=='r') return 5;
    if(c=='n') return 3;
    if(c=='b') return 3;
    if(c=='p') return 1;
    if(c=='k') return 0;
 }

int main()
{
    int w=0, b=0;
    char ch;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            scanf(" %c",&ch);//读取隐藏的换行符，或者用cin
            if(isupper(ch)) w += white(ch);
            if(islower(ch)) b += black(ch);
        }
        //printf("\n");
    }
    if(w==b) printf("Draw\n");
    if(w<b) printf("Black\n");
    if(w>b) printf("White\n");
}