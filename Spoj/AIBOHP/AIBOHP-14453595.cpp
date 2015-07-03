#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define l long

#define MAX 1000000000
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

ll dp[6105][6105];

ll solve(char s[],int i,int j)
{
	if(i>j)
		return 0;

	if(dp[i][j] != -1)
		return dp[i][j];

	if(s[i]==s[j])
		return dp[i][j] = solve(s,i+1,j-1);
	else
		return dp[i][j] = 1 + min(solve(s,i+1,j),solve(s,i,j-1));
}

int main()
{
	ll t;
	slld(t);
	while(t--)
	{
		fin(0,6104)
			fjn(0,6104)
				dp[i][j] = -1;
		char s[6105];
		scanf(" %s",s);
		ll res;
		res = solve(s,0,strlen(s)-1);
		plld(res);
		pn;
	}
	return 0;
}