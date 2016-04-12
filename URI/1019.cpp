#include<bits/stdc++.h>

using namespace std;

int main()
{

    int h=0,m=0,s=0,t;
    cin >> t;
    if(t>=3600)
    {
        h=t/3600;
        t-=(h*3600);


    }
    if(t>=60)
    {
        m=t/60;
        t-=(m*60);
    }
    if(t<60)
        s=t;
   printf("%d:%d:%d\n",h,m,s);

    return 0;
}


