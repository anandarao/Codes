#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main() {
 
    int t,n,i,res;
    long int a[100005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%ld",&a[i]);
        res=0;
        for(i=0;i<n-2;i++)
        {
            if(a[i]!=a[i+1])
            {
                if(a[i+1]!=a[i+2])
                    res+=1;
                else
                    res+=2;
            }
        }
        if(a[n-2]!=a[n-1])
            res+=2;
        printf("%d\n",res);
    }
    return 0;
}