#include <bits/stdc++.h>
typedef long long ll;


using namespace std;

ll  a, b, c, d, e, f;
ll dp[1000000];
long long  fn( ll n ) {
    if( n == 0 ) return a%10000007;
    if( n == 1 ) return b%10000007;
    if( n == 2 ) return c%10000007;
    if( n == 3 ) return d%10000007;
    if( n == 4 ) return e%10000007;
    if( n == 5 ) return f%10000007;
    if(dp[n]!=-1)
        return dp[n];
    else
    {
       dp[n]=((fn(n-1)+fn(n-2)+fn(n-3)+fn(n-4)+fn(n-5)+fn(n-6))%10000007);
       return dp[n];
    }

}

int main()
{
    memset(dp,-1,1000000);
    ll n, caseno = 0, cases;
   cin >> cases;
    while( cases-- ) {
        memset(dp,-1,1000000);
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        printf("Case %lld: %lld\n", ++caseno, fn(n));
    }



    return 0;
}
