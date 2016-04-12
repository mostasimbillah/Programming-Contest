#include <stdio.h>
#include<math.h>
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

    int t,n,a=0,i;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        a=IS_prime(n);
        if(a==0)
            printf("%d eh primo\n",n);
        else
            printf("%d nao eh primo\n",n);

    }
    return 0;
}
