/*
    Problem Name: Opposite Task
    Problem Link: http://www.lightoj.com/volume_showproblem.php?problem=1001
    Submitted by : Mostasim Billah
    Email: mostasim.10@gmail.com
    Handle: Light OJ: Mostasim Billah || Codeforces: mostasim || Uva; mostasim

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{

    unsigned int t,n;
    cin >> t;

    while(t--)
    {
        cin >> n;
        int c=0;
        if(n>10)
        {
         c=n-10;
        }
        cout << c <<" "<< n-c << endl;
    }

    return 0;
}
