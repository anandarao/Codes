#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int t,n;
    ll a[MAX],k;
    sd(t);
    while(t--)
    {
        sd(n);
        slld(k);
        int i;
        fin(i,0,n-1)
            slld(a[i]);
        ll res = ceil((float)a[0]/k);
        ll prev;
        if(a[0]%k==0)
            prev = 0;
        else
            prev = k - a[0]%k - 1;
        fin(i,1,n-1)
        {
            if(prev>a[i])
            {
                prev -= a[i];
                prev--;
            }
            else if(prev==a[i])
            {
                prev = 0;
            }
            else
            {
                a[i]-=prev;
                res += ceil((float)a[i]/k);
                if(a[i]%k==0)
                    prev = 0;
                else
                    prev = k - a[i]%k - 1;
            }
        }
        plld(res);
        pn;
    }
    return 0;
}
