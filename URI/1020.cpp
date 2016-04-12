
#include<bits/stdc++.h>

using namespace std;

int main()
{

    int y=0,m=0,d=0,t;
    cin >> t;
    if(t>=365)
    {
        y=t/365;
        t-=(y*365);


    }
    if(t>=30)
    {
        m=t/30;
        t-=(m*30);
    }
    if(t<30)
        d=t;
   printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);

    return 0;
}


