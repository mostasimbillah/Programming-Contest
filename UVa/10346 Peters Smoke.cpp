#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,m,d,total=0;
    while(scanf("%d%d",&n,&k)==2)
    {
        int g=n;
        while(n>=k)
        {
            m=(n%k);
            d=n/k;
            n=m+d;
            total=total+d;
        }
        cout << total+g << endl;
        total=0;
    }


    return 0;
}
