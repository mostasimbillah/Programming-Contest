#include<bits/stdc++.h>
typedef long long ll;
typedef unsigned long long ull;
using namespace std;


int main()
{

    int n,oo=0;
    ull x,d;
    char p;
    cin >> n >>x;

    while(n--)
    {
        cin >> p >> d;
        if(p=='+')
        {
            x+=d;
        }
        if(p=='-')
        {
            if(x>=d)
            {
                x-=d;
            }else
            {
                oo++;
            }
        }

    }
    cout << x << " " << oo << endl;


    return 0;
}
