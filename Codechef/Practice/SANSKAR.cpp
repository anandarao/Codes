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

ll a[21];
bool dp[9][1<<21];

int main()
{
    int t,n,k,i,j,m;
    sd(t);
    while(t--)
    {
        sd(n);
        sd(k);
        ll s = 0;
        fin(i,0,n-1)
            {
                slld(a[i]);
                s += a[i];
            }
        if(s%k!=0 || k > n)
            {
                printf("no");
                pn;
                continue;
            }
        if(s==0)
            {
                printf("yes");
                pn;
                continue;
            }
        s /= k;
        memset(dp,false,sizeof(dp));
        dp[0][0] = true;
        fin(i,0,k-1)
            fin(j,0,(1LL<<n) - 1)
            {
                if(dp[i][j]==false)
                    continue;

                ll s1 = 0;
                fin(m,0,n-1)
                    if(j&(1LL<<m))
                        s1 += a[m];
                s1 -= i*s;

                fin(m,0,n-1)
                    if(j&(1LL<<m))
                        continue;
                    else
                    {
                        int p = j | (1LL<<m);
                        if(s1 + a[m] == s)
                            dp[i+1][p] = true;
                        else if(s1 + a[m] < s)
                            dp[i][p] = true;
                    }
            }

        if(dp[k][(1LL<<n) - 1])
            printf("yes");
        else
            printf("no");
        pn;
    }
    return 0;
}
