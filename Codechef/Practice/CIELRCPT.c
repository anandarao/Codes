#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 
    int t,res;
    long unsigned int p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lu",&p);
        res=0;
        if(p>2048)
            {
                res=p/2048;
                p=p%2048;
            }
        while(p)
        {
            if(p%2==1)
                res++;
            p/=2;
        }
        printf("%d\n",res);
    }
    return 0;
}