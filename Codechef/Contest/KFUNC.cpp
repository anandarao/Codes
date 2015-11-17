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

ll fun(ll n)
{
    if(n<10)
        return n;

    ll r = 0;
    while(n)
    {
        r += n%10;
        n/=10;
    }

    return fun(r);
}

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        ll a,d,l,r;
        slld(a);
        slld(d);
        slld(l);
        slld(r);
        d = fun(d);
        a = fun(a);
        ll al = fun(a + (l-1)*d);
        vector<int> v,x;
        v.pb(d);
        x.pb(fun(al+d));
        ll i = fun(2*d);
        while(!count(v.begin(),v.end(),i))
        {
            v.pb(fun(i));
            x.pb(fun(al+i));
            i = fun(i+d);
        }
        fin(i,1,x.size()-1)
            x[i] += x[i-1];
        ll n = r-l;
        ll res = fun(al) + (n/v.size())*x[x.size()-1] + (n%v.size()==0?0:x[n%v.size()-1]);
        plld(res);
        pn;
    }
    return 0;
}
