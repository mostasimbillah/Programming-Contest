#include<bits/stdc++.h>
#define MAX 1000 //Max define .. upto 19 digit
typedef long long int ll;
using namespace std;

bool prime[MAX];
int p[1000];
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
    int i,j,k,n,c=0;
    cin >> n >>k;
    for(i=0;i<kk&&p[i]<=n;i++)
    {
       for(j=0;j<kk&&p[j]<=n;j++)
       {

        if(p[j]+p[j+1]+1==p[i])
            c++;

       }

    }
    if(c>=k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

