#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    int t;
    long long unsigned int n,k,i,a[100003],b[100003],temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %llu",&n,&k);
        for(i=0;i<n;i++)
        {
            scanf("%llu",&temp);
            a[i]=k/temp;
        }
        for(i=0;i<n;i++)
        {
            scanf("%llu",&temp);
            b[i]=temp*a[i];
        }
        temp=b[0];
        for(i=1;i<n;i++)
            if(temp<b[i])
                temp=b[i];
        printf("%llu\n",temp);
    }
    return 0;
}