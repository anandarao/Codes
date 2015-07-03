#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair;
#define pb push_back;

ll area(int x1,int y1,int x2,int y2,int x3,int y3)
{
    return x1 * (y2-y3) + x2 * (y3-y1) + x3 * (y1-y2) ;
}

int main()
{
    int n;
    sd(n);
    vector<pair<int,int> > v;
    fint(0,n-1)
    {
        int x,y;
        sd(x);
        sd(y);
        v.push_back(make_pair(x,y));
    }
    ll ans=0;
    for(int i=0;i<=n-3;++i)
        for(int j=i+1;j<=n-2;++j)
            for(int k=j+1;k<=n-1;++k)
                {
                    if(area(v[i].first,v[i].second,v[j].first,v[j].second,v[k].first,v[k].second)!=0)
                        ans++;
                }
    plld(ans);
}