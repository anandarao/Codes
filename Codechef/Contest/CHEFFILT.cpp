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

char a[11];
int b[1024];
ll dp[2][1024];
ll pow2[MAX];

int main()
{
    int t;
    pow2[0] = 1;
    fin(t,1,100000)
        {
            pow2[t] = pow2[t-1] * 2;
            if(pow2[t]>=MOD)
                pow2[t]%=MOD;
        }
    sd(t);
    while(t--)
    {
        ss(a);
        int k=0,i,n,j,p;
        fin(i,0,9)
            if(a[i]=='w')
                k += pow2[9-i];
        sd(n);
        fin(i,0,1023)
            dp[0][i] = b[i]=0;
        fin(i,0,n-1)
        {
            ss(a);
            p = 0;
            fin(j,0,9)
                if(a[j]=='+')
                    p += pow2[9-j];
            b[p]++;
        }
        dp[0][0] = 1;
        fin(i,0,1023)
        {
            if(b[i])
            {
                fin(j,0,1023)
                {
                    dp[1][j] = pow2[b[i]-1]*(dp[0][j] + dp[0][j^i]);
                    if(dp[1][j]>=MOD)
                        dp[1][j]%=MOD;
                }
                fin(j,0,1023)
                    dp[0][j] = dp[1][j];
            }
        }
        plld(dp[0][k]);
        pn;
    }
    return 0;
}
