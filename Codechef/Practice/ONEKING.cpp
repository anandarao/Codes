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
    while(t--)
    {
        scanf("%d",&n);
        pair<int,int> p[n];
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&p[i].second,&p[i].first);
        }
        sort(p,p+n);
        int flag = 0;
        int res = 1;
        for(i=1;i<n;i++)
        {
            if(p[i].second > p[flag].first)
            {
                flag = i;
                res++;
            }
        }
        printf("%d\n",res);
    }
    return 0;
}