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

map<ll,int> m;

int main()
{
    int n,i;
    char ch;
    ll temp;
    int c[105];
    sd(n);
    memset(c,0,sizeof(c));
    fin(i,1,n)
    {
        cin>>ch;
        slld(temp);
        if(ch=='+')
        {
            c[i]++;
            m[temp] = i;
        }
        else
        {
            c[i]--;
            if(m[temp]==0)
                c[0]++;
        }
    }
    int r = 0,res = 0;
    fin(i,0,n)
    {
        r += c[i];
        res = max(r,res);
    }
    pd(res);
    return 0;
}