#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100005
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

int main()
{	
		int n,m;
		sd(n);
		sd(m);
		int x,y;
		sd(x);
		sd(y);
		x--;
		y--;
		int a[n][m];
		int dp[n][m];
		int i,j;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				sd(a[i][j]);
		for(i=x;i<n;i++)
		{
			for(j=y;j<m;j++)
			{
				if(i==x && j==y)
				{
					dp[i][j] = a[i][j];
				}
				else if(i==x)
					{
						dp[i][j] = dp[i][j-1] - a[i][j];
					}
				else if(j==y)
					{
						dp[i][j] = dp[i-1][j] - a[i][j];
					}
				else
					{
						dp[i][j] = max(dp[i][j-1],dp[i-1][j]) - a[i][j];
					}
			}
		}
		if(dp[n-1][m-1]>=0)
		{
			printf("Y %d",dp[n-1][m-1]);
		}
		else
			printf("N");
	return 0;
}