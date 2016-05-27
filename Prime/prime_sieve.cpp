#include<bits/stdc++.h>
#define MAX 10001000 //Max define
typedef long long int ll;
using namespace std;

bool prime[MAX];
int p[1000000];
int kk=0;

void prime_sieve()
{
    prime[1]=true;
    prime[0]=true;
    for(int i=4;i<MAX;i+=2) prime[i]=true;
    for(int i=3;i<=sqrt(MAX);i+=2)
    {
        if(prime[i]==false)
        {
            for(int j=i*i;j<MAX;j+=i) prime[j]=true;
        }
    }
    for(int i=0;i<MAX;i++)
    {
        if(prime[i]==false)
        {

            p[kk]=i;
            kk++;
        }
    }
}

int main()
{

    prime_sieve();

   ll n,i;

   while(1)
   {
      cin >> n;
      if(n<10000000)
      {
           if(prime[n]==true) cout << n<< "= Not Prime"<<endl;
           else cout <<n<< "= Prime" <<endl;
      }
      else
      {
           int sq=sqrt(n);
           bool flag=false;

          for(i=0;i<=kk && p[i]<=sqrt(n);i++)
          {
             if(n%p[i]==0)
             {
                 cout << "Not prime!"<<endl;
                 flag=true;
                 break;
             }
          }
          if(flag==false)
           cout<< "Prime!"<<endl;

      }


   }







    return 0;
}
