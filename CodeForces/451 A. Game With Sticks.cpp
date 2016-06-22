#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n,m,c=0;

    cin >> n>> m;

    for(int i=n, j=m;i>1&&j>1;i--,j--)
    {
        c++;
    }
   // cout << c << endl;
    if(c%2==1)
        cout << "Malvika\n";
    else
        cout << "Akshat\n";

    return 0;
}
