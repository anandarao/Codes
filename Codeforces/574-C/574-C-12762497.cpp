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

bool check(ll a)
{
    while(a%2==0)
        a = a/2;

    while(a%3==0)
        a = a/3;

    if(a==1)
        return true;
    else
        return false;
}

int main()
{
    int n;
    sd(n);
    int i;
    ll a[MAX];
    fin(i,0,n-1)
        slld(a[i]);
    ll val;
    ll num = a[1]/__gcd(a[0],a[1]);
    ll den = a[0]/__gcd(a[0],a[1]);

    if(check(num) && check(den))
    {
        val = a[0] * num;
    }
    else
    {
        printf("No");
        return 0;
    }

    fin(i,2,n-1)
    {
        num = a[i]/__gcd(val,a[i]);
        den = val/__gcd(val,a[i]);
        if(check(num) && check(den))
        {
            val = val * num;
        }
        else
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
    return 0;
}