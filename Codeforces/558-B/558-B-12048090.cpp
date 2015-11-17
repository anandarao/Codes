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
    int n,i;
    ll a[100005],resv;
    map<ll,int> mc,ml,mr;
    int resc = 0,resl,len;
    sd(n);

    fin(i,1,n)
    {
        slld(a[i]);
        mc[a[i]]++;
        if(ml[a[i]]==0)
            ml[a[i]]=i;
        mr[a[i]]=i;
        if(mc[a[i]]>resc)
        {
            resc = mc[a[i]];
            resl = mr[a[i]] - ml[a[i]] + 1;
            resv = a[i];
        }
        else if(mc[a[i]]==resc)
        {
            len = mr[a[i]] - ml[a[i]] + 1;
            if(len < resl)
            {
                resl = len;
                resv = a[i];
            }
        }
    }
    pd(ml[resv]);
    ps;
    pd(mr[resv]);
    return 0;
}