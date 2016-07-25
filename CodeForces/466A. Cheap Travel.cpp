#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,a,b,ans=0,c,d;

    cin >> n >> m >> a >> b;

    if(n>m)
    {
        c=(floor(n/m));
        d=n-(m*c);

        ans=min((c*b)+(d*a),(c*b)+(b));
        ans=min(ans,n*a);

    }else
    {
        ans=min(b,n*a);
    }

    cout << ans << endl;




    return 0;
}
