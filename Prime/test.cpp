#include<bits/stdc++.h>
#define PI 3.141592653589793
using namespace std;

int main()
{
     int n,t;
    double digit;
    cin >>t;
    while(t--)
    {
        cin >>n;
        digit=0;
       for(int i=1;i<=n;i++)
       {
           digit+=log10(i);
       }
       digit=floor(digit);
       digit=digit+1;
       int ans=digit;
       cout << ans << endl;
    }



    return 0;
}
