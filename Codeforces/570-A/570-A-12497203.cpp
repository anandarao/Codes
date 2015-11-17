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
    int n,m,i,j,b[105],pos;
    ll a[105][105],mx,res,mx1;
    sd(n);
    sd(m);
    fin(i,1,m)
        fin(j,1,n)
            slld(a[i][j]);
    memset(b,0,sizeof(b));
    res = 0;
    mx1 = -1;
    fin(i,1,m)
        {
            mx = -1;
            fin(j,1,n)
                {
                    if(a[i][j]>mx)
                    {
                        mx = a[i][j];
                        pos = j;
                    }
                }
            b[pos]++;
            if(b[pos]>mx1)
            {
                res = pos;
                mx1 = b[pos];
            }
            else if(b[pos]==mx1 && pos<=res)
            {
                res = pos;
            }
        }
        pd(res);
    return 0;
}