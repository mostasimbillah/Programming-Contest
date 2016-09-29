#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
string IntToString (ll a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}
int main()
{
    ll a,b,c;
    while(1)
    {
        cin >> a >> b;
        if(a==0 && b==0)
            break;
        c=a+b;
       // cout << c << endl;
        string s=IntToString(c);
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(s.at(i)=='0')
            {
                continue;
            }else
            {
                cout << s.at(i);
            }

        }
        cout << endl;

    }



    return 0;
}
