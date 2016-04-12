#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,t,i;

    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> a;
        if(a==0)
            cout << "NULL\n";
        else if(a>0)
        {
            if(a%2==0)
                cout << "EVEN POSITIVE\n";
            else
                cout << "ODD POSITIVE\n";

        }else if(a<0)
        {
            if(abs(a)%2==0)
                cout << "EVEN NEGATIVE\n";
            else
                cout << "ODD NEGATIVE\n";
        }
    }

    return 0;
}
