#include<bits/stdc++.h>

using namespace std;

int main()
{

    char str[20];

    int t,i,sum=0,l;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        scanf("%s",&str);

        if(str[0]=='d')
        {
            cin >> l;
            sum+=l;
        }else
        {
            cout << sum << endl;
        }
    }
    return 0;
}
