#include<bits/stdc++.h>

using namespace std;
int char_to_postiton(char i)
{
    if(i>=97 && i<=122)
    {
        return i-96;
    }else if(i>=65 && i<=90)
    {
        return i-38;
    }
}
int IS_prime(int num)
{
	int isprime = 0,i;
	 for(i=2;i<=num/2;++i)
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

    char str[21];
    int length,i,t=0,prime=0;

    while(scanf("%s",str)!=EOF)
    {
        length =strlen(str);
        for(i=0;i<length;i++)
        {
            t=t+char_to_postiton(str[i]);
        }

        prime=IS_prime(t);
        if(prime==0)
            cout << "It is a prime word.\n";
        else
            cout << "It is not a prime word.\n";

        t=0;
        prime=0;
    }


    return 0;
}
