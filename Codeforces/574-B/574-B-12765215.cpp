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

vector<int> adjList[4005];

int main()
{
    int n,m,i,j,k,p;
    sd(n);
    sd(m);

    int x,y;
    while(m--)
    {
        sd(x);
        sd(y);
        adjList[x].pb(y);
        adjList[y].pb(x);
    }

    int res = 40000;

    fin(i,1,n)
    {
        for(j=0;j<(int)adjList[i].size();j++)
        {
            for(k=0;k<(int)adjList[adjList[i][j]].size();k++)
            {
                for(p=0;p<(int)adjList[adjList[adjList[i][j]][k]].size();p++)
                    if(adjList[adjList[adjList[i][j]][k]][p] == i)
                    {
                        res = min(res , (int)adjList[i].size() + (int)adjList[adjList[i][j]].size() + (int)adjList[adjList[adjList[i][j]][k]].size() - 6);
                    }
            }
        }
    }

    if(res==40000)
        printf("-1");
    else
        pd(res);

    return 0;
}