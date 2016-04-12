#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a,b,c=0,i;

    cin >> a;

    for(i=1;i<=a;i++)
    {
        cin >> b;
        if(b>=10 && b<=20)
            c++;
    }
    printf("%d in\n%d out\n",c,a-c);
    return 0;
}



