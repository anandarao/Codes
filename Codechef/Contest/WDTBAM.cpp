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

char a[1024],b[1024];
ll w[1024];
int main()
{
    int t,n,i;
    sd(t);
    while(t--)
    {
        sd(n);
        ss(a);
        ss(b);
        int c=0;
        fin(i,0,n)
        {
            slld(w[i]);
        }
        fin(i,0,n-1)
        {
            if(a[i]==b[i])
                c++;
        }
        if(c==n)
            plld(w[n]);
        else
            plld(*max_element(w,w+c+1));
        pn;
    }
    return 0;
}
