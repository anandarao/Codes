#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
//#define l long
 
#define MAX 314160
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
 
#define mp make_pair
#define pb push_back
 
ll dp[71][71][71][71];
 
int main()
{
    int t,n;
    sd(t);
    ll a[71][71];
    while(t--)
    {
        sd(n);
        fint(1,n)
            fjnt(1,n)
                slld(a[i][j]);
        int l,b,i,j;
        memset(dp,0,sizeof(dp));
        ll res=0;
        for(l=1;l<=n;l++)
            for(b=1;b<=n;b++)
                for(i=1;i<=n-b+1;i++)
                    for(j=1;j<=n-l+1;j++)
                    {
                        if(l==1 && b==1)
                            dp[l][b][i][j] = a[i][j];
                        else if(l==1)
                            dp[l][b][i][j] = dp[l][b-1][i][j]^a[i+b-1][j];
                        else if(b==1)
                            dp[l][b][i][j] = dp[l-1][b][i][j]^a[i][j+l-1];
                        else
                            dp[l][b][i][j] = dp[l][b-1][i][j]^dp[l-1][1][i+b-1][j]^a[i+b-1][j+l-1];
                        res = max(res,dp[l][b][i][j]);
                    }
        plld(res);
        pn;
    }
    return 0;
}