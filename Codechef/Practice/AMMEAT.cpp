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

ll a[MAX];

int main()
{
    int t;
    sd(t);
    int n,i;
    ll m;
    while(t--)
    {
        sd(n);
        slld(m);
        fin(i,0,n-1)
            slld(a[i]);
        sort(a,a+n);
        ll res = 0;
        ll sum = 0;
        fde(i,0,n-1)
        {
            sum += a[i];
            res++;
            if(sum>=m)
            {
                break;
            }
        }
        if(sum>=m)
            plld(res);
        else
            pd(-1);
        pn;
    }
    return 0;
}
