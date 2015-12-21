#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define l long

#define MAX 100003
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)
#define sllf(a) scanf("%llf",&a)
#define ss(a) scanf(" %s",a)

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
    int x,n,i;
    char s[54];
    sd(x);
    int res = 0;
    int fact[7];
    fact[0] = 1;
    fin(i,1,6)
        fact[i] = i*fact[i-1];
    while(n--)
    {
        ss(s);
        int c;
        fin(i,0,8)
        {
            c = count(s+i*4,s+i*4+4,'0') + count(s+52-2*i,s+53-2*i,'0');
            if(c>=x)
                res += (fact[c]/(fact[x]*fact[c-x]));
        }
    }
    pd(res);
    return 0;
}
