//Prime Sieve
#include<bits/stdc++.h>
#define MAX 10001000 //Max define .. up to 19 digit
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

    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==1)
        {
            printf("(3, 5)\n");
        }else
        {
            if(prime[((6*n)-1)]==false)
            {
                printf("(%d, %d)\n",((6*n)-1),((6*n)+1));
            }

        }
    }

    return 0;
}
