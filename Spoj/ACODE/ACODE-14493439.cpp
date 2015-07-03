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
	char a[5002];
	while(1)
	{
		scanf(" %s",a);
		if(a[0]=='0')
			break;
		int n = strlen(a);
		if(n==1)
			{
				printf("1\n");
				continue;
			}
		ll dp[n+1];
		int i;
		dp[0]=dp[1]=1;
		for(i=2;i<=n;i++)
		{
			dp[i] = 0;
			if(a[i-2]=='1' || (a[i-2]=='2' && a[i-1]<='6'))
				dp[i] += dp[i-2];

			if(a[i-1]!='0')
				dp[i] += dp[i-1];
		}
		printf("%lld\n",dp[n]);
	}
	return 0;
}