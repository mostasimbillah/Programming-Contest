#include<bits/stdc++.h>

using namespace std;


int main()
{

    int t,i;

    int w=0,s=0,n=0,e=0,p=0;
    while(scanf("%d",&t)==1)
    {
        char str[t+1];
        if(t==0)
            break;


       scanf("%s",str);

        for(i=0;i<t;i++)
        {
            if(str[i] =='D')
                p++;
            if(str[i] =='E')
                p--;


        }

        if(p%4==0)
            printf("N\n");
         else if(p%4==1)
            printf("L\n");
       else if(p%4==2)
            printf("S\n");
       else if(p%4==3)
            printf("O\n");
       else if(p%4==0)
            printf("N\n");
        else if(p%4==-1)
            printf("O\n");
       else if(p%4==-2)
            printf("S\n");
       else if(p%4==-3)
            printf("L\n");

        p=0;

    }


    return 0;
}
