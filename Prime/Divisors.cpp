#include<bits/stdc++.h>

using namespace std;

int countDivisor(int n) {
  int divisor = 0;
  for (int i = 1; i * i <= n; i++) {
    if (i * i == n) {
      divisor += 1;
    } else if (n % i == 0) {
      divisor += 2;
    }
  }
  return divisor;
}
vector<int> primes; // we'll preload primes once at the beginning
int countDivisor2(int n) {
  int divisor = 1;
  for (int i = 0; i < primes.size(); i++) {
    if (n % primes[i] == 0) {
      int cnt = 1;
      while (n % primes[i] == 0) {
        n /= primes[i];
        cnt++;
      }
      divisor *= cnt;
    }
  }
  return divisor;
}
int main()
{
    int n;
    while(true)
    {
        cin >> n;
        printf("%d\n",countDivisor2(n));
    }


    return 0;
}

