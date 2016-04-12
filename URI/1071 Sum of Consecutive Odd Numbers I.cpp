#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c=0,i;

    cin >> a >> b;
    if(a>b)
        swap(a,b);


    for(i=a+1;i<b;i++)
    {
        if(i%2!=0)
            c+=i;
    }
    cout << c << endl;

    return 0;
}
