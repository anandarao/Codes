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

int main()
{
    int t;
    int h[505],k[505],dp[1010];
    sd(t);
    while(t--)
    {
        int n;
        sd(n);
        int x=0;
        fint(0,n-1)
        {
            sd(h[i]);
            h[i] *= 2;
            x = h[i]>x?h[i]:x;
        }
        fint(0,n-1)
        {
            sd(k[i]);
        }
        fint(1,x)
            dp[i] = 100000;
        dp[0] = 0;
        fint(1,x)
            fjnt(0,n-1)
            {
                if(i>=k[j])
                    dp[i] = min(dp[i],1 + dp[i-k[j]]);
            }
        int res = 0;
        fint(0,n-1)
            {
                res += dp[h[i]];
            }
        pd(res);
        pn;
    }
	return 0;
}
