#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i;
    scanf("%d",&n);
    pair<int,int> a[n];
    for(i=0;i<n;i++)
    {
        a[i].second = i;
        scanf("%d",&a[i].first);
    }
    sort(a,a+n);
    reverse(a,a+n);
    int res[n];
    res[a[0].second] = 0;
    int count = 0;
    for(i=1;i<n;i++)
    {
       if(a[i].first == a[i-1].first)
       {
            res[a[i].second] = count ;
       }
       else
       {
            res[a[i].second] = i;
            count = i;
       }
    }
    for(i=0;i<n;i++)
    {
       printf("%d ",res[i]+1);
    }
    return 0;
}