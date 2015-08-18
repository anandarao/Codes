#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
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
	int t;
	sd(t);
	while(t--)
    {
        int n;
        sd(n);
        int a[n];
        int sum=0;
        fint(0,n-1)
            {
                sd(a[i]);
                sum += a[i];
            }
        if(sum&1)
            printf("NO\n");
        else
        {
            bool m[sum+10];
            memset(m,false,sizeof(m));
            m[0]=true;
            fint(0,n-1)
                for(int j=sum;j>=a[i];j--)
                    m[j] = m[j] || m[j-a[i]];
            if(m[sum/2])
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
	return 0;
}
