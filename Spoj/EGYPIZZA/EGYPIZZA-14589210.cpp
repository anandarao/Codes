#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 100003
#define MOD 1000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

int main()
{
    int t;
    sd(t);
    map<string,int> m;
    string s;
    while(t--)
    {
        cin>>s;
        m[s]++;
    }
    int c1 = m["1/4"];
    int c2 = m["1/2"];
    int c3 = m["3/4"];
    int res = c3 + ceil(c2/2.0);
    int res2 = c3 + 2*(c2%2);
    if(c1>=res2)
    {
        c1 -= res2;
        res += ceil(c1/4.0);
    }
    pd(res+1);
    return 0;
}
