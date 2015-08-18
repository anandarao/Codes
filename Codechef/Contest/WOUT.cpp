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

ll a[1000006],n,h;

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        slld(n);
        slld(h);
        ll i,p,q;
        fin(i,0,n)
            a[i] = 0;
        fin(i,0,n-1)
        {
            slld(p);
            slld(q);
            a[p]++;
            a[q+1]--;
        }
        fin(i,1,n-1)
        {
            a[i] += a[i-1];
        }
        ll res = 0,sum = 0;
        fin(i,0,h-1)
        {
            sum += a[i];
        }
        res = sum;
        fin(i,h,n-1)
        {
            sum += a[i] - a[i-h];
            res = max(sum,res);
        }
        plld(n*h - res);
        pn;
    }
    return 0;
}
