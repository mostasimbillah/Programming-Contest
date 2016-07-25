#include<bits/stdc++.h>

using namespace std;

#define MAX_N 2000
#define MAX_W 2000
int n;
int dp[MAX_N+1][MAX_W+1];
int sizes[MAX_N+1];
int value[MAX_N+1];
int CAP;
int func(int i,int w)
{
	if(i==n+1) return 0;
	if(dp[i][w]!=-1) return dp[i][w];
	int profit1=0,profit2=0;
	if(w+sizes[i]<=CAP)
		profit1=value[i]+func(i+1,w+sizes[i]);

	profit2=func(i+1,w);
	dp[i][w]=max(profit1,profit2);
	return dp[i][w];
}
int main()
{


	memset(dp,-1,sizeof(dp));
	scanf("%d%d",&CAP,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&sizes[i],&value[i]);
	}
	printf("%d\n",func(1,0));


}
