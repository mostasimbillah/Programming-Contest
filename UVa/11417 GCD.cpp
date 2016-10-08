#include<bits/stdc++.h>

using namespace std;

int gcd(int a,int b)
{
    if(b!=0)
        return gcd(b,a%b);
    else
        return a;
}
int main()
{
    int g=0,n,i,j;


    while(scanf("%d",&n)==1)
    {

        if(n==0)
            break;


         for(i=1;i<n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            g+=gcd(i,j);
        }
    }
    cout << g << endl;
    g=0;

    }


    return 0;
}
