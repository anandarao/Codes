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

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pllf(a) printf("%llf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

char a[1003][1003];
int dp[1003][1003],dp2[1003][1003];

int main()
{
    int t;
    sd(t);
    map<char,int> m;
    m['.'] = 0;
    m['#'] = 1;
    while(t--)
    {
        int n,i,j;
        sd(n);
        fin(i,0,n-1)
            scanf(" %s",a[i]);
        memset(dp,0,sizeof(dp));
        fde(i,0,n-1)
            fde(j,0,n-1)
            {
                if(i==n-1 && j==n-1)
                    dp[i][j] = dp2[i][j] = m[a[i][j]];
                else if(i==n-1)
                {
                    dp[i][j] = dp[i][j+1] + m[a[i][j]];
                    dp2[i][j] = m[a[i][j]];
                }
                else if(j==n-1)
                {
                    dp2[i][j] = dp2[i+1][j] + m[a[i][j]];
                    dp[i][j] = m[a[i][j]];
                }
                else
                {
                    dp2[i][j] = dp2[i+1][j] + m[a[i][j]];
                    dp[i][j] = dp[i][j+1] + m[a[i][j]];
                }
            }
        ll res = 0;
        fin(i,0,n-1)
            fin(j,0,n-1)
                if(dp[i][j]==0 && dp2[i][j]==0)
                    res++;
        plld(res);
        pn;
    }
    return 0;
}
