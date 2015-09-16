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

ll fact[10*MAX];
ll sum[10*MAX];

void init()
{
    fact[0] = 1;
    sum[0] = 0;
    ll i;
    fin(i,1,1000000)
        {
            fact[i] = fact[i-1]*i;
            if(fact[i]>=MOD)
                fact[i]%=MOD;
            sum[i] = sum[i-1] + fact[i];
            if(sum[i]>=MOD)
                sum[i]%=MOD;
        }
        return;
}

int main()
{
    int t;
    sd(t);
    ll a,n,i;
    init();
    while(t--)
    {
        slld(a);
        slld(n);
        plld((sum[n]-sum[a-1]+MOD)%MOD);
        pn;
    }
    return 0;
}
