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
    int t,n,x,sum,res;
    int a[100];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&x);
        sum=0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        res = sum/x;
        if((sum-*min_element(a,a+n))/x==res)
            res = 0;
        if(res)
            printf("%d\n",res);
        else
            printf("-1\n");
    }
    return 0;
}