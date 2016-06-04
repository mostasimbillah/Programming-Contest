#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n,h,in,total=0;

    cin >> n>>h;

    for(int i=0;i<n;i++)
    {
        cin >> in;

        if(in<=h)
            total+=1;
        else
            total+=2;

    }

    cout << total << endl;
    return 0;
}
