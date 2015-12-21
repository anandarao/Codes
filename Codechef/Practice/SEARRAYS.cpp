#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)
#define ss(a) scanf(" %s",a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

ll dp[MAX];

int main()
{
    int t,n,k,i;
    sd(t);
    while(t--)
    {
        sd(n);
        sd(k);
        dp[0] = 1;
        fin(i,1,n)
        {
            dp[i] = dp[i-1];
            if(i>=k)
                dp[i] += dp[i-k];
            if(dp[i]>=MOD)
                dp[i]%=MOD;
        }
        plld(dp[n]);
        pn;
    }
    return 0;
}
