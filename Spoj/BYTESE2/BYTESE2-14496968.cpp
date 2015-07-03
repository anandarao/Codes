#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10000001
#define MOD 1000000007

#define fin(a,n) for(ll i=a;i<=n;i++)
#define fint(a,n) for(int i=a;i<=n;i++)
#define fjn(a,n) for(ll j=a;j<=n;j++)
#define fde(a,n) for(ll i=n-1;i>=a;i--)

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
	int t,n,i;
	ll a,d;
    scanf("%d",&t);
    while(t--)
    {
    	map<ll,int> c;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            {
            	scanf("%lld %lld",&a,&d);
            	c[a]++;
            	c[d]--;
            }
        int sum=0,res=0;
        for(map<ll,int>::iterator it=c.begin();it!=c.end();it++)
        {
        	sum+=it->second;
        	res = sum>res?sum:res;
        }
        printf("%d\n",res);
    }
	return 0;
}