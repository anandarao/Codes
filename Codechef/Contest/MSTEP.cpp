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

map<int,pair<int,int> > m;

int main()
{
    int t;
    sd(t);
    while(t--)
    {
        m.clear();
        int x,n,i,j,y;
        sd(n);
        fin(i,0,n-1)
            fin(j,0,n-1)
            {
                sd(x);
                m[x] = mp(i,j);
            }
        ll res = 0;
        x = m[1].first;
        y = m[1].second;
        fin(i,2,n*n)
            {
                res += abs(m[i].first - x) +abs(m[i].second - y);
                x = m[i].first;
                y = m[i].second;
            }
        plld(res);
        pn;
    }
    return 0;
}
