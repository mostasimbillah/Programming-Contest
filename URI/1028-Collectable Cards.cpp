#include<bits/stdc++.h>

using namespace std;

int hcf(int n1, int n2)
{
    if (n2!=0)
       return hcf(n2, n1%n2);
    else
       return n1;
}
int main()
{

    int t,a,b,i;

    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> a >>b;

        cout << hcf(a,b) << endl;
    }

    return 0;
}
