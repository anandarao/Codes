#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
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

#define mp make_pair
#define pb push_back


int main()
{
    int n,q,y;
    sd(n);
    sd(q);
    l r[n+1];
    l c[n+1];
    memset(r,0,sizeof(r));
    memset(c,0,sizeof(c));
    l x;
    string a;
    while(q--)
    {
        cin>>a;
        sd(y);
        sld(x);
        if(a[0]=='R')
            r[y]+=x;
        else
            c[y]+=x;
    }
    l *mr = max_element(r+1,r+n+1);
    l *mc = max_element(c+1,c+n+1);
    pld(*mr+*mc);
	return 0;
}
