#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,i,j,r,b;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
        for(j=1;j<=n;j++)
        {
            cin >> r;

            if(j==(n+1)/2)
                b=r;
        }
        printf("Case %d: %d\n",i,b);
    }


    return 0;
}
