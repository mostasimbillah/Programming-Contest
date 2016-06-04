#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main()
{

    LL n,h,in,total=0,k,c2=0;

    cin >> n>>h>>k;

    for(int i=0;i<n;i++)
    {
        cin >> in;

        if(in>k)
            total+=(in-k);
        else if(in==k)
            total+=0;
        else if(in<k)
        {
            if(c2==0)
            {
                total+=2;
                c2++;
            }
            else
                total+=0;
        }

    }

    cout << total << endl;
    return 0;
}

