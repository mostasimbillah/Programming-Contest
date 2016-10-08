#include<bits/stdc++.h>
#define MAX 20001000 //Max define .. up to 19 digit
typedef long long int ll;
using namespace std;

bool prime[MAX];
int p[10000000];
int kk=0;
vector<pair<ll,ll> > vp;

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
   // clock_t startingTime=clock();

    prime_sieve();
    ll n,i;
    //cout << kk<< endl;


   ll nn,cc=0;

    for(int i=0;i<=kk;i++)
    {
        if(p[i+1]-p[i]==2)
        {
            //cout << cc++ <<" :";
            vp.push_back(make_pair(p[i],p[i+1]));
            //cout<< p[i]<<" "<< p[i+1] << endl;
        }
    }
    //cout << kk<< endl;
    //cout<<((clock()-startingTime)/CLOCKS_PER_SEC)<< endl;
   while(scanf("%lld",&nn)!=EOF)
   {

        nn=nn-1;
        printf("(%lld, %lld)\n",vp[nn].first,vp[nn].second);

   }

    return 0;
}
