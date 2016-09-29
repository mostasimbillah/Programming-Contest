#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    double a,b,c;
    cin >> t;
    while(t--)
    {
        cin >> a>> b >> c;
        cout << fixed << showpoint << setprecision(1)<<((a*2)+(b*3)+(c*5))/10.0 << endl;
    }


    return 0;
}

