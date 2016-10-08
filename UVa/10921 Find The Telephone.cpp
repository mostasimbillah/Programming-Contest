#include<bits/stdc++.h>

using namespace std;

int msg(char a)
{
    if(a=='A')
        return 2;
    if(a=='B')
        return 2;
    if(a=='C')
        return 2;
    if(a=='D')
        return 3;
    if(a=='E')
        return 3;
    if(a=='F')
        return 3;
    if(a=='G')
        return 4;
    if(a=='H')
        return 4;
    if(a=='I')
        return 4;
    if(a=='J')
        return 5;
    if(a=='K')
        return 5;
    if(a=='L')
        return 5;
    if(a=='M')
        return 6;
    if(a=='N')
        return 6;
    if(a=='O')
        return 6;
    if(a=='P')
        return 7;
    if(a=='Q')
        return 7;
    if(a=='R')
        return 7;
    if(a=='S')
        return 7;
    if(a=='T')
        return 8;
    if(a=='U')
        return 8;
    if(a=='V')
        return 8;
    if(a=='W')
        return 9;
    if(a=='X')
        return 9;
    if(a=='Y')
        return 9;
    if(a=='Z')
        return 9;
    if(a=='0')
        return 0;
    if(a=='1')
        return 1;
    if(a=='2')
        return 2;
    if(a=='3')
        return 3;
    if(a=='4')
        return 4;
    if(a=='5')
        return 5;
    if(a=='6')
        return 6;
    if(a=='7')
        return 7;
    if(a=='8')
        return 8;
    if(a=='9')
        return 9;



}
int main()
{

    char str[31];
    int i,length;


    while(scanf(" %s",&str)!=EOF)
    {
        length=strlen(str);
        for(i=0;i<length;i++)
        {
            if(str[i]!='-')
            {
                printf("%d",msg(str[i]));
            }else{

                printf("-");
            }
        }
        printf("\n");
    }


    return 0;
}
