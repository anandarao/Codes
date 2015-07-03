#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 1010
#define MOD 1000000009

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

#define mp make_pair;
#define pb push_back;

int main()
{
    string a;
    int n;
    cin>>n;
    int i;
    map<string,int> m;
    int c=0;
    for(i=0;i<n;i++)
        {
            cin>>a;
            m[a]++;
            if(m[a]>c)
                c = m[a];
        }
    pd(c);
    return 0;
}