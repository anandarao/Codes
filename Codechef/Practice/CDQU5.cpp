#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define l long
 
#define MAX 1010
#define MOD 1000000009
 
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
ll dp[1000003];
 
int main()
{
    int t;
    dp[2]=1;
    dp[3]=1;
    dp[4]=1;
    fin(5,1000002)
        {
            dp[i] = dp[i-2] + dp[i-3];
            if(dp[i]>=MOD)
                dp[i]%=MOD;
        }
    sd(t);
    while(t--)
    {
        ll x;
        slld(x);
        plld(dp[x]);
        pn;
    }
	return 0;
}