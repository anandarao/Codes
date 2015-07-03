#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
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
    ll n,temp,sum,r;
    slld(n);
    ll ans = 0;
    bool check[1010] = {false};
    while(1)
    {
        ans++;
        sum = 0;
        while(n)
        {
            r = n%10;
            sum += r*r;
            n/=10;
        }
        n = sum;
        if(n==1)
        {
            pd(ans);
            break;
        }
        if(check[n]==true)
        {
            pd(-1);
            break;
        }
        check[n]=true;
    }
    return 0;
}
