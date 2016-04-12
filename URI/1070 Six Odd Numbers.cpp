#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c=0,i;

    cin >> a;
    if(a%2==0)
        a=a+1;
    for(i=a;i<a+12;i++)
    {
        if(i%2!=0)
            cout << i << endl;
    }


    return 0;
}

