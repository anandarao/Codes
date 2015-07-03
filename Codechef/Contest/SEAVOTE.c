#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int t,n,a[10003],sum1,sum2,i,c;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum1=0;sum2=0;c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum1+=a[i];
            sum2+=a[i]-1;
            if(a[i])
                c++;
        }
        if(sum1>=100&&sum1-100<=c-1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}