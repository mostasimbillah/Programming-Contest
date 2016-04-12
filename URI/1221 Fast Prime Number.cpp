#include<bits/stdc++.h>
using namespace std;

int IS_prime(int num)
{
	int isprime = 0,i;
	 for(i=2;i<=sqrt(num);i++)
  {
      if(num%i==0)
      {
          isprime=1;
          break;
      }
  }

	return isprime;
}
int main()
{

    int t,n,i,r;
    cin >> t;

    for(i=0;i<t;i++)
    {
        cin >> n;

        r=IS_prime(n);

        if(r==0)
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }


    return 0;
}
