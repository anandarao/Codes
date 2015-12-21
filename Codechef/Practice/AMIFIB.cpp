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

char str[1010];

int main()
{
    int i,t;
    set<unsigned ll> s;
    s.insert(0);
    s.insert(1);
    unsigned ll a=0,b=1,c;
    fin(i,3,4801)
    {
        c = a + b;
        s.insert(c);
        a = b;
        b = c;
    }
    sd(t);
    while(t--)
    {
        ss(str);
        a = 0;
        fin(i,0,strlen(str)-1)
            a = a*10 + str[i] - '0';
        if(s.find(a)!=s.end())
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
