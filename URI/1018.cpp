#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n_100=0;
    int n_50=0;
    int n_20=0;
    int n_10=0;
    int n_5=0;
    int n_2=0;
    int n_1=0;
    int a,b;

    cin >> a;
    int x=a;
    if(a>=100)
    {
        n_100=a/100;
        a=a-(n_100*100);
    }

    if(a>=50)
    {
        n_50=a/50;
        a=a-(n_50*50);
    }
    if(a>=20)
    {
        n_20=a/20;
        a=a-(n_20*20);
    }
    if(a>=10)
    {
        n_10=a/10;
        a=a-(n_10*10);
    }
    if(a>=5)
    {
        n_5=a/5;
        a=a-(n_5*5);
    }
    if(a>=2)
    {
        n_2=a/2;
        a=a-(n_2*2);
    }
    if(a>=1)
    {
        n_1=a/1;
        a=a-(n_1*1);
    }
   printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n",x,n_100,n_50,n_20,n_10,n_5,n_2,n_1);

    return 0;
}

