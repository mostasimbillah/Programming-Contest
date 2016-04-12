#include<bits/stdc++.h>
using namespace std;


int main()
{

    int t,n,i,r=0;

    while(scanf("%d",&t)==1)
    {
        if(t==0)
            break;

        for(i=1;i<=t;i++)
        {
            r+=pow(i,2);
        }
        cout << r << endl;
        r=0;
    }

    return 0;
}

