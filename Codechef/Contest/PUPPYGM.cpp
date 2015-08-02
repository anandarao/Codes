#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10003
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
    int t,i,j,x,y;
    sd(t);
    while(t--)
    {
        sd(x);
        sd(y);
        bool flag;
        if(x%2==0 || y%2==0)
            flag = true;
        else
            flag = false;
        if(flag)
            printf("Tuzik");
        else
            printf("Vanka");
        pn;
    }
    return 0;
}
