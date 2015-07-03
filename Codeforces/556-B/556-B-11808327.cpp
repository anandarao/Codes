#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjnt(a,n) for(int j=a;j<=n;j++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back


int main()
{
    int n;
    sd(n);
    int a[n+1];
    fint(0,n-1)
        sd(a[i]);
    int c = n - a[0];
    bool flag=true;
    fint(1,n-1)
        {
            if( (n + a[i] + (int)pow(-1,i)*c) % n != i)
            {
                flag = false;
                break;
            }
        }
    if(flag)
        printf("Yes");
    else
        printf("No");
    return 0;
}