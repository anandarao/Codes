#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 2006
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

int dp[MAX][MAX];
char a[MAX],b[MAX];

int solve(char a[],char b[])
{
	int n = strlen(a);
	int m = strlen(b);
	int i,j;
	dp[0][0] = 0;
	for(i=1;i<=n;i++)
		dp[i][0]=i;
	for(j=1;j<=m;j++)
		dp[0][j]=j;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)
		{
			if(a[i-1]==b[j-1])
			{
				dp[i][j] = dp[i-1][j-1];
			}
			else
			{
				dp[i][j] = 1 + min(min(dp[i-1][j-1],dp[i-1][j]),dp[i][j-1]);
			}
		}
	return dp[n][m];
}

int main()
{	
	int t;
	sd(t);
	while(t--)
	{
		scanf(" %s",a);
		scanf(" %s",b);
		pd(solve(a,b));
		pn;
	}
	return 0;
}