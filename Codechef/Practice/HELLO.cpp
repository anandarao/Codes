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

int main()
{
    int t,u,n,i,m,c,res;
    sd(t);
    double d,r;
    while(t--)
    {
        slf(d);
        sd(u);
        double cost = d*u;
        res = 0;
        sd(n);
        fin(i,1,n)
        {
            sd(m);
            slf(r);
            sd(c);
            double cs = double(c)/m + r*u;
            if(cs<cost)
            {
                cost = cs;
                res = i;
            }
        }
        pd(res);
        pn;
    }
    return 0;
}
