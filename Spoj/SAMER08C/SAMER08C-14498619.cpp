#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100005
#define MOD 10

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

int main()
{
	int n,m;
	int h[MAX],v[MAX],a[MAX];
	while(1)
	{
		sd(n);
		sd(m);
		if(n==0 && m==0)
			break;
		fint(0,n-1)
		{
            fjnt(0,m-1)
                scanf("%d", &a[j]);
            h[m] = h[m+1] = 0;
            for(int k=m-1;k>=0;k--){
                h[k] = max(h[k+2] + a[k], h[k+1]);
            }
            v[i] = h[0];
        }
        h[n] = h[n+1] = 0;
        for(int i=n-1;i>=0;--i){
            h[i] = max(h[i+2] + v[i], h[i+1]);
        }
        printf("%d\n", h[0]);
	}
	return 0;
}