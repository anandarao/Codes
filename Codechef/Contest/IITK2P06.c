#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t;
    long unsigned int a,b,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lu %lu",&a,&b);
        if((a+b)%5==0)
        {
            res=abs(a-(2*(a+b)/5));
            printf("%lu\n",res);
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
