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

vector<ll> fib;

void init()
{
    fib.pb(1);
    fib.pb(1);
    int i;
    fin(i,2,100)
        fib.pb(fib[i-1] + fib[i-2]);
    return;
}

int main()
{
    init();
    int t;
    sd(t);
    ll n;
    while(t--)
    {
        slld(n);
        int i;
        fin(i,1,100)
        {
            if(fib[i]>n)
                break;
        }
        pd(i-1);
        pn;
    }
    return 0;
}
