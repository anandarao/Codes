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
    int a1,b1,a2,b2,a,b;
    sd(a);
    sd(b);
    sd(a1);
    sd(b1);
    sd(a2);
    sd(b2);
    bool flag = false;
    if(b1<=b && b2<=b &&(a1+a2<=a))
        flag = true;
    else if(b1<=b && a2<=b && (a1+b2<=a))
        flag = true;
    else if(a1<=a && a2<=a && (b1+b2<=b))
        flag = true;
    else if(a1<=a && b2<=a && (b1+a2<=b))
        flag = true;
    else if(a1<=b && b2<=b && (b1+a2<=a))
        flag = true;
    else if(a1<=b && a2<=b && (b1+b2<=a))
        flag = true;
    else if(b1<=a && a2<=a && (a1+b2<=b))
        flag = true;
    else if(b1<=a && b2<=a && (a1+a2<=b))
        flag = true;
    if(flag)
        printf("YES");
    else
        printf("NO");
    return 0;
}