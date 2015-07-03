#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string.h>
#include <map>
#include <math.h>
#include <cmath>
 
using namespace std;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    long long a[100005];
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        sort(a,a+n);
        long long res = 0;
        for(i=n-1;i>=0;i-=2)
            res += a[i];
        printf("%lld\n",res);
    }
    return 0;
}