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
    int c_50=0;
    int c_25=0;
    int c_10=0;
    int c_05=0;
    int c_01=0;
    double x,y;
    scanf("%lf",&x);
    x+=1e-9;
     a=(int)x;
     y=x-a;

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
  printf("NOTAS:\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n",n_100,n_50,n_20,n_10,n_5,n_2);


    if(y>=0.50)
    {
        c_50=y/0.50;
        y=y-(c_50*0.50);
    }
    if(y>=0.25)
    {
        c_25=y/0.25;
        y=y-(c_25*0.25);
    }
    if(y>=0.10)
    {
        c_10=y/0.10;
        y=y-(c_10*0.10);
    }
    if(y>=0.05)
    {
        c_05=y/0.05;
        y=y-(c_05*0.05);
    }
    if(y>=0.01)
    {
        c_01=y/0.01;
        y=y-(c_01*0.01);
    }

     printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",n_1,c_50,c_25,c_10,c_05,c_01);

    return 0;
}


