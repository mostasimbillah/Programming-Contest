#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c,a,b,sum=0;
    scanf("%d",&c);

    for(int i=0;i<c;i++)
    {
        scanf("%d%d",&a,&b);
        sum+=(b-a);
    }
    cout << sum << endl;

    return 0;
}

