#include<cstdio>
#include<vector>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
 
int main()
{
    long long t,n;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long k=0,solve[n],num=n;
        vector<pair<long long,long long> > ans;
        while(n--)
        {
            long long m;
            scanf("%lld",&m);
            vector<pair<long long,long long> > v;
            for(long long i=0;i<m;++i)
            {
                long long x,y;
                scanf("%lld %lld",&x,&y);
                v.push_back(make_pair(x,y));
            }
            long long ar=0;
            for(long i=0;i<m-1;++i)
                ar+=(v[i].first*v[i+1].second)-(v[i].second*v[i+1].first);
            ar+=v[m-1].first*v[0].second-v[0].first*v[m-1].second;
            ar=abs(ar);
            ans.push_back(make_pair(ar,k));
            k++;
        }
        sort(ans.begin(),ans.end());
        for(long long i=0;i<num;++i)
            solve[ans[i].second]=i;
        for(long long i=0;i<num;++i)
            printf("%lld ",solve[i]);
        printf("\n");
    }
    return 0;
} 