#include <bits/stdc++.h>

using namespace std;
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
int main()
{

        int a,c;

        cin >> a>> c;

        cout << gcd(a,c);



    return 0;
}
