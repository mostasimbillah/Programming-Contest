#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int num,week,mx,mn,left,ans;
    cin >> num;

    if(num%7==0)
    {
        week=num/7;
        ans= week*2;
        cout << ans << " " << ans << endl;
    }else
    {
        week=num/7;
        left=num%7;
        if(left>=2)
        {
            mn=(week*2);
            mx=(week*2)+2;
        }else
        {
            mn=(week*2)+left;
            mx=(week*2)+1;
        }
        cout << mn << " " << mx << endl;
    }

    return 0;
}
