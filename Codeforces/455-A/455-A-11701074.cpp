#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100005
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

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
    int n,t;
    sd(n);
    ll a[MAX+1]={0};
    ll dp[MAX+1];
    fint(0,n-1)
    {
    	sd(t);
    	a[t]++;
    }
    dp[0] = 0;
    dp[1] = a[1];
    fin(2,MAX)
    {
    	dp[i] = max(dp[i-1],dp[i-2]+a[i]*i);
    }
    plld(dp[MAX]);
}