#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 
    int t,n,a[10003]={0},i,x,count=0,res;
    scanf("%d",&t);
    while(t--)
    {
        count=0;
        for(i=0;i<10003;i++)
            a[i]=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&x);
            a[x]++;
            if(count==0)
            {
                res=x;
                count=a[x];
            }
            else if(count<a[x])
            {
                res=x;
                count=a[x];
            }
            else if(count==a[x]&&x<res)
            {
                res=x;
            }
        }
        printf("%d %d\n",res,count);
    }
    return 0;
}