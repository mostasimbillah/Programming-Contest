#include<bits/stdc++.h>

using namespace std;
int big(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int main()
{
    int a,b,c,d,e;

    cin >> a >> b >> c;

    d=big(a,b);
    e=big(c,d);
    cout << e << " eh o maior\n";


    return 0;
}







