#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    string a = "Tetrahedron", b = "Cube", c = "Octahedron", d = "Icosahedron",e = "Dodecahedron";
    int num, sum=0;
    scanf("%d", &num);
    while(num--)
    {
        string s;
        cin >> s;
        if(s==a) sum += 4;
        if(s==b) sum += 6;
        if(s==c) sum += 8;
        if(s==e) sum += 12;
        if(s==d) sum += 20;

    }
    printf("%d\n", sum);

}
