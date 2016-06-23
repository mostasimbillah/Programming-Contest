#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,a,b,c,suma=0,sumb=0,sumc=0;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> a>>b>>c;
        suma+=a;
        sumb+=b;
        sumc+=c;

    }
    if(suma==0 && sumb==0 && sumc==0)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
