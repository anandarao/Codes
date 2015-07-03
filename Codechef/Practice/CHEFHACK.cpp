#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 10000001
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

int prime[10000010];
bool visited[353][353];
int a[353][353];
int n;

void bfs(int i,int j,int flag)
{
    if(!visited[i][j])
    {
        visited[i][j]=true;
        if( (i>1) && (a[i-1][j]%2==flag) && (prime[a[i-1][j]]==-1))
        {
            bfs(i-1,j,flag);
        }

        if( (i<n) && (a[i+1][j]%2==flag) && (prime[a[i+1][j]]==-1))
        {
            bfs(i+1,j,flag);
        }

        if( (j>1) && (a[i][j-1]%2==flag) && (prime[a[i][j-1]]==-1))
        {
            bfs(i,j-1,flag);
        }

        if( (j<n) && (a[i][j+1]%2==flag) && (prime[a[i][j+1]]==-1))
        {
            bfs(i,j+1,flag);
        }
    }
}

int main()
{
    int t;
    sd(t);
    memset(prime,0,sizeof(prime));
    prime[0]=-1;
    prime[1]=-1;
    int pc=0;
    for(ll i=2;i<=10000000;i++)
        if(prime[i]==0)
            {
                prime[i] = pc++;
                for(ll j=i*i;j<=10000000;j+=i)
                    prime[j]=-1;
            }
    while(t--)
    {
        sd(n);
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                {
                    sd(a[i][j]);
                    visited[i][j]=false;
                }
        ll ans = 0;
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
            {
                if(prime[a[i][j]]!=-1)
                    ans += prime[a[i][j]];
                else if(!visited[i][j])
                {
                    ans += a[i][j]/2 + 2*(a[i][j]%2);
                    bfs(i,j,a[i][j]%2);
                }
            }
        plld(ans);
        pn;
    }
	return 0;
}
