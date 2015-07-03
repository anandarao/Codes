#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 314160
#define MOD 1000000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

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

vector<int> adjList[100005];
bool visited[100005];

void bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    while(!q.empty())
    {
        int k = q.front();
        q.pop();
        int j;
        for(j=0;j<adjList[k].size();j++)
        {
            if(!visited[adjList[k][j]])
            {
                visited[adjList[k][j]] = true;
                q.push(adjList[k][j]);
            }
        }
    }
}

int main()
{
    int n,m;
    int a,b;
    sd(n);
    sd(m);
    int i;
    fin(i,1,m)
    {
        sd(a);
        sd(b);
        adjList[a].pb(b);
        adjList[b].pb(a);
    }
    if(m == n-1)
    {
        bfs(1);
        fin(i,2,n)
            if(!visited[i])
            {
                printf("NO");
                return 0;
            }
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
