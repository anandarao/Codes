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

int main()
{
    int t,n,d,i;
    int a[MAX];
    ll res;
    sd(t);
    while(t--)
    {
        res = 0;
        sd(n);
        sd(d);
        fin(i,0,n-1)
            sd(a[i]);
        sort(a,a+n);
        i = n-1;
        while(i>=1)
        {
            if(a[i]-a[i-1] < d)
            {
                res += a[i] + a[i-1];
                i--;
            }
            i--;
        }
        plld(res);
        pn;
    }
    return 0;
}
