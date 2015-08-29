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

#define gc getchar_unlocked

void si(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    int n,k,a[100005],i,j,b[100005];
    si(n);
    si(k);
    ll res;
    fin(i,0,n-1)
        {
            si(a[i]);
        }
    b[n-1] = n;
    res = 1;
    fde(i,0,n-2)
        {
            b[i] = b[i+1];
            if(a[i]>=k)
            {
                fin(j,i+1,min(n-1,b[i+1]))
                {
                    if((a[i]%a[j]) == k )
                    {
                        b[i] = j;
                        break;
                    }
                }
            }
            res += (ll)(b[i]-i);
        }
    plld(res);
    return 0;
}
