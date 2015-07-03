#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
 
    int t;
    long long unsigned int n,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu",&n);
        a=n/2+1;
        printf("%llu\n",a);
    }
    return 0;
}