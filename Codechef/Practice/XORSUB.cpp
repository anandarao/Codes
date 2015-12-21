#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

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
#define gc getchar_unlocked

int dp[1005][1024];
int a[1005];

int main()
{
    int t,n,i,k,j;
    sd(t);
    while(t--)
    {
        sd(n);
        sd(k);
        fin(i,1,n)
            sd(a[i]);
        memset(dp,0,sizeof(dp));
        dp[0][0] = 1;
        fin(i,1,n)
            fin(j,0,1023)
                dp[i][j] = dp[i-1][j] | dp[i-1][j^a[i]];
        int res = 0;
        fin(i,0,1023)
            if(dp[n][i])
                res = max(res,k^i);
        pd(res);
        pn;
    }
    return 0;
}
