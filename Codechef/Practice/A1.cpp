#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 1010
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
    int t;
    sd(t);
    while(t--)
    {
        int n,m;
        sd(n);
        sd(m);
        int a[n];
        fint(0,n-1)
            {
                sd(a[i]);
            }
        bool w[m+1][n+1];
        fint(0,n)
            w[0][i] = true;
        fint(1,m)
            w[i][0] = false;
        fint(1,m)
        {
            fjnt(1,n)
            {
                w[i][j] = w[i][j-1];
                if (i >= a[j-1])
                    w[i][j] = w[i][j] || w[i - a[j-1]][j-1];
            }
        }
        if(w[m][n])
            printf("Yes");
        else
            printf("No");
        pn;
    }
	return 0;
}
