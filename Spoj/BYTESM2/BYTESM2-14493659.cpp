#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10000001
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
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

int c[MAX];

int main()
{	
	int t;
	sd(t);
	while(t--)
	{
		int h,w;
		sd(h);
		sd(w);
		int a[h][w];
		int i,j;
		for(i=0;i<h;i++)
			for(j=0;j<w;j++)
				scanf("%d",&a[i][j]);
		int dp[h][w];
		for(i=0;i<w;i++)
			dp[0][i] = a[0][i];
		for(i=1;i<h;i++)
			for(j=0;j<w;j++)
			{
				if(j==0)
				{
					dp[i][j] = max(dp[i-1][j],dp[i-1][j+1]);
				}
				else if(j == w-1)
				{
					dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]);
				}
				else
				{
					dp[i][j] = max(dp[i-1][j],dp[i-1][j-1]);
					dp[i][j] = max(dp[i][j],dp[i-1][j+1]);
				}
				dp[i][j] += a[i][j];
			}
		int res = 0;
		for(i=0;i<w;i++)
		{
			res = max(res,dp[h-1][i]);
		}
		pd(res);
		pn;
	}
	return 0;
}