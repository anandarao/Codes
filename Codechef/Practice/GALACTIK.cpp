#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define l long

#define MAX 3010
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

#define mp make_pair;
#define pb push_back;

vector<int> adjList[100005];
bool visited[100005];
int cost[100005];

ll bfs(int i)
{
    queue<int> q;
    q.push(i);
    visited[i] = true;
    int res = INT_MAX;
    if(cost[i]>=0)
        res = cost[i];
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
                if(cost[adjList[k][j]]>=0)
                    res = min(res,cost[adjList[k][j]]);
            }
        }
    }
    return res;
}

int main()
{
	//int t;
	//sd(t);
	//while(t--)
    {

        memset(visited,false,sizeof(visited));
        int n,f;
        int a,b;
        sd(n);
        sd(f);
        fint(1,n)
            adjList[i].clear();
        while(f--)
        {
            sd(a);
            sd(b);
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }
        fint(1,n)
        {
            sd(cost[i]);
        }
        ll res1;
        int m = bfs(1);
        int c = 0;
        int res2;
        bool flag1 = false;
        bool flag2 = true;
        if(m==INT_MAX)
        {
            flag2 = false;
        }
        res2 = m;
        res1 = 0;
        fint(2,n)
        {
            if(!visited[i])
            {
                flag1 = true;
                m = bfs(i);
                if(m==INT_MAX)
                    {
                        flag2 = false;
                        break;
                    }
                if(m<res2)
                    {
                        res1 += res2;
                        res2 = m;
                    }
                else
                    res1 += m;
                c++;
            }
        }
        if(!flag1)
        {
            pd(0);
        }
        else
        {
            if(flag2)
                plld(res1 + res2*c);
            else
                pd(-1);
        }
    }
}
