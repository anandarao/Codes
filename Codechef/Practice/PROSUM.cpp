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
    int t;
    sd(t);
    while(t--)
    {
        ll n,a,c[3]={0},i;
        slld(n);
        fin(i,0,n-1)
        {
            slld(a);
            if(a<3)
                c[a]++;
        }
        ll res = (n*(n-1))/2 - (c[0]*(c[0]-1))/2 - c[0]*(n-c[0]) - (c[1]*(c[1]-1))/2 - c[1]*(n-c[1]-c[0]) - (c[2]*(c[2]-1))/2;
        plld(res);
        pn;
    }
    return 0;
}
