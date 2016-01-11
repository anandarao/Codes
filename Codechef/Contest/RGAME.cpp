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

ll pow2[MAX];

int main()
{
    int t,i;
    sd(t);
    pow2[0] = 1;
    fin(i,1,100000)
        pow2[i] = (pow2[i-1]*2)%MOD;
    while(t--)
    {
        int n;
        sd(n);
        ll a,sum;
        slld(a);
        sum = (pow2[n]*a)%MOD;
        ll res = 0;
        fin(i,1,n)
        {
            slld(a);
            res = (res + sum*a)%MOD;
            sum = (pow2[n-1]*a + sum*500000004)%MOD;
        }
        plld(res);
        pn;
    }
    return 0;
}
