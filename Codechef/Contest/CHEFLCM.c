#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int t;
    long long int n,j,res,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);
        if(n==1)
        {
            printf("1\n");
            continue;
        }
        j=sqrt(n);
        res=0;
        for(i=1;i<=j;i++)
        {
            if(n%i==0)
                res+=n/i+i;
        }
        if(n==j*j)
            res-=j;
 
        printf("%lld\n",res);
    }
    return 0;
}