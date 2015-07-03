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
    int t,n,i,res;
    int a[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        res=1;
        for(i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
                res++;
            else
                a[i]=a[i-1];
        }
        printf("%d\n",res);
    }
	return 0;
}