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
    int t,n;
    long long s[5001],small;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++)
            scanf("%lld",&s[i]);
        sort(s,s+n);
        small = s[1] - s[0];
        for(int i=2;i<n;i++)
        {
            if(small > s[i]-s[i-1])
                small=s[i]-s[i-1];
        }
        printf("%lld\n",small);
    }
	return 0;
}