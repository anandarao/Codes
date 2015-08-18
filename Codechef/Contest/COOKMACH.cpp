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

vector<int> v1,v2;

void bit(ll a,int flag)
{
    int c = 0;
    while(a)
    {
        if(a&1==1)
        {
            if(flag==1)
                v1.pb(c);
            else
                v2.pb(c);
        }
        c++;
        a/=2;
    }
    return;
}

int main()
{
    int t;
    sd(t);
    ll a,b;
    while(t--)
    {
        slld(a);
        slld(b);
        bit(a,1);
        bit(b,2);
        if(v1.size()==1)
        {
            pd( (int)abs(v1[0]-v2[0]) );
        }
        else
        {
            int c = v1[v1.size()-2],d = v1[v1.size()-1];
            c++;
            d -= c;
            pd( (int)abs(d - v2[0] ) + c);
        }
        pn;
        v1.clear();
        v2.clear();
    }
    return 0;
}
