#include <bits/stdc++.h>
using namespace std;

#define ll long long
//#define l long

#define MAX 100003
#define MOD 1000007

#define fin(i,a,n) for(i=a;i<=n;i++)
#define fde(i,a,n) for(i=n;i>=a;i--)

#define sd(a) scanf("%d",&a)
#define sld(a) scanf("%ld",&a)
#define slld(a) scanf("%lld",&a)
#define slf(a) scanf("%lf",&a)

#define pd(a) printf("%d",a)
#define pld(a) printf("%ld",a)
#define plld(a) printf("%lld",a)
#define plf(a) printf("%lf",a)
#define pn printf("\n")
#define ps printf(" ")

#define mp make_pair
#define pb push_back

ll dp[505][MAX];
set<int> minc;
map<int,int> cc;
vector<int> cost[MAX];
vector<ll> a;
vector<ll> v;
vector<int> c;

int main()
{
    int t;
    int n,m,k,l,r,ci,i,j;
    ll sum,temp;
    sd(t);
    while(t--)
    {
        sd(n);
        sd(k);
        sd(m);
        sum = 0;
        fin(i,0,n-1)
        {
            slld(temp);
            sum += temp;
            a.push_back(temp);
            cost[i].clear();
        }
        fin(i,1,m)
        {
            sd(l);
            sd(r);
            sd(ci);
            cost[l-1].push_back(ci);
            cost[r].push_back(-1*ci);
        }
        fin(i,0,n-1)
        {
                if(cost[i].size()!=0)
                {
                    fin(j,0,cost[i].size()-1)
                    {
                        if(cost[i][j]>0)
                        {
                            minc.insert(cost[i][j]);
                            cc[cost[i][j]]++;
                        }
                        else
                        {
                            cc[-1*cost[i][j]]--;
                            if(cc[-1*cost[i][j]]==0)
                                minc.erase(-1*cost[i][j]);
                        }
                    }
                }
                if(minc.size()!=0)
                {
                    if(a[i]<0)
                    {
                        v.push_back(-1*a[i]);
                        c.push_back(*minc.begin());
                    }
                }
        }

        fin(i,0,k)
            fin(j,0,v.size())
            {
                if(i==0||j==0)
                    dp[i][j]=0;
                else if(c[j-1]<=i)
                    dp[i][j] = max(v[j-1]+dp[i-c[j-1]][j-1],dp[i][j-1]);
                else
                    dp[i][j] = dp[i][j-1];
            }

        ll res = sum + dp[k][v.size()];
        plld(res);
        pn;
        minc.clear();
        cc.clear();
        a.clear();
        c.clear();
        v.clear();
    }
    return 0;
}
