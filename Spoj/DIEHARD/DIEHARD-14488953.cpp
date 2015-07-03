#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 100006
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n-1;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

int dp[1100][1100];
int solve(int h,int a)
{
	if(h<=0 || a<=0)
		return 0;

	if(dp[h][a]!=-1)
		return dp[h][a];

	int c1 = solve(h-17,a+7);
	int c2 = solve(h-2,a-8);
	if(c1==0 && c2 == 0)
	{
		return dp[h][a] = 1;
	}
	else
	{
		return dp[h][a] = 2 + max(c1,c2);
	}
}

int main()
{	
	int t;
	sd(t);
	while(t--)
	{
		int h,a;
		sd(h);
		sd(a);
		memset(dp,-1,sizeof(dp));
		int res = solve(h,a);
		pd(res);
		pn;
	}
	return 0;
}