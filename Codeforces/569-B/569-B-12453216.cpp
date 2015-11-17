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
    int n,i;
    int a[100005];
    sd(n);
    map<int,int> m,m1;
    fin(i,1,n)
        {
            sd(a[i]);
            if(m[a[i]]==0 && a[i]<=n)
                {
                    m[a[i]]=i;
                    m1[a[i]]=1;
                }
        }
    int k=1;
    fin(i,1,n)
    {
        if(m[a[i]]==0)
        {
            while(m1[k]==1)
                k++;
            pd(k);
            m1[k]=1;
            k++;
            ps;
        }
        else
        {
            pd(a[i]);
            m[a[i]]=0;
            ps;
        }
    }
    return 0;
}