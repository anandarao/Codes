#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int t,con;
    long int n,a[100002],i,small;
    long long int res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld",&n);
        con=1;
        for(i=0;i<n;i++)
        {
            scanf("%ld",&a[i]);
            if(a[i]==1)
                con=0;
        }
        if(!con)
            printf("-1\n");
        else
        {
            if(n==1)
            {
                printf("2\n");
            }
            else
            {
                res=0;
                small=a[0];
                for(i=0;i<n;i++)
                {
                    res=res+a[i];
                    if(small>a[i])
                        small=a[i];
                }
                res=res-small+2;
                printf("%lld\n",res);
            }
        }
    }
    return 0;
}