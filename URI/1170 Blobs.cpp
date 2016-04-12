#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,d=0,i;
    double n;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> n;
        while(n>1.0)
        {
            n=n/2;
            d++;

        }
        printf("%d dias\n",d);
        d=0;
    }


    return 0;
}

