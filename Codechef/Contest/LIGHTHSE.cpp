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

pair<ll,ll> x[MAX],y[MAX];
map<pair<ll,ll>,int> m;

int main()
{
    int t;
    sd(t);
    int i,n;
    ll xi,yi;
    while(t--)
    {
        m.clear();
        sd(n);
        fin(i,0,n-1)
            {
                slld(xi);
                slld(yi);
                x[i].first = y[i].second = xi;
                x[i].second = y[i].first = yi;
                m[mp(xi,yi)]=i+1;
            }
        sort(x,x+n);
        sort(y,y+n);
        if(m[mp(x[0].first,y[0].first)])
        {
            printf("1\n%d NE\n",m[mp(x[0].first,y[0].first)]);
        }
        else if(m[mp(x[n-1].first,y[n-1].first)])
        {
            printf("1\n%d SW\n",m[mp(x[n-1].first,y[n-1].first)]);
        }
        else if(m[mp(x[0].first,y[n-1].first)])
        {
            printf("1\n%d SE\n",m[mp(x[0].first,y[n-1].first)]);
        }
        else if(m[mp(x[n-1].first,y[0].first)])
        {
            printf("1\n%d NW\n",m[mp(x[n-1].first,y[0].first)]);
        }
        else
        {
            int k = m[mp(y[0].second,y[0].first)];
            int j = m[mp(y[1].second,y[1].first)];
            if(y[0].second > y[1].second)
            {
                printf("2\n%d NW\n%d NE\n",k,j);
            }
            else
            {
                printf("2\n%d NE\n%d NW\n",k,j);
            }
        }
    }
    return 0;
}
