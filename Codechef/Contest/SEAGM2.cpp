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

vector<long double> p[15];

int main()
{
    long double sum,x,res,w1,w;
    int t,n,m,i,j,k,c;
    sd(t);
    while(t--)
    {
		sum = 0.0;
        sd(n);
        sd(m);
        bool flag[n];
        fin(i,0,n-1)
        {
            flag[i]=false;
            p[i].clear();
            fin(j,1,m)
            {
                sllf(x);
                if(x==0.0)
                    flag[i] = true;
                p[i].push_back(x);
            }
        }
        if(flag[0])
            printf("0.000000");
        else
        {
            bool flag2 = false;
            fin(i,1,n-1)
            {
                if(!flag[i])
                {
                    w=1.0;
                    j=0;
                    k=0;
                    while(j!=m || k!=m)
                    {
                        while(w < 1e10)
                        {
                            if(k==m)
                                break;
                            w = w/p[0][k];
                            k++;
                        }

                        if(k==m)
                        {
                            while(w > 1e-20)
                            {
                                if(j==m)
                                    break;
                                w = w*p[i][j];
                                j++;
                            }

                            if(j!=m)
                                j = m;
                        }
                        else
                        {
                            while(w > 1e-20)
                            {
                                if(j==m)
                                    break;
                                w = w*p[i][j];
                                j++;
                            }
                        }
                    }
                    if(w >= 1e10)
                    {
                        flag2 = true;
                        break;
                    }
                    else
                    {
                        sum += w;
                    }
                }
            }
            if(flag2)
            {
                printf("0.000000");
            }
            else
            {
                res = 1/(1+sum);
                printf("%.15llf",res);
            }
        }
        pn;
    }
    return 0;
}
