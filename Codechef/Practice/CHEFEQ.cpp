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
    int t,n,temp,c[100005],i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<100005;i++)
            c[i]=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&temp);
            c[temp]++;
        }
        sort(c,c+100005);
        printf("%d\n",n-c[100004]);
    }
    return 0;
}