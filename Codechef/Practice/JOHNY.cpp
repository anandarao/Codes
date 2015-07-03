#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <string>
#include <math.h>
 
using namespace std;
 
int main()
{
    int t,n,k;
    pair<long long,int> a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%lld",&a[i].first);
            a[i].second = i;
        }
        scanf("%d",&k);
        --k;
        sort(a,a+n);
        for(int i=0;i<n;i++)
            if(a[i].second == k)
            {
                printf("%d\n",i+1);
                break;
            }
    }
    return 0;
}