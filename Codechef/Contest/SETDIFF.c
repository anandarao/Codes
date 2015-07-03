#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int cmpfunc (const void * a, const void * b)
{
   return ( *(long long int*)a - *(long long int*)b );
}
 
long long int pow_mod(long long int x, long long int y, long long int z)
{
    long long int number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = (long long int)x * x % z;
    }
    return number;
}
 
int main() {
 
    long long int t,n,i;
    long long int a[100005],res;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        qsort(a, n, sizeof(long long int), cmpfunc);
        res=0;
        for(i=0;i<n;i++)
        {
            res+= ((pow_mod(2,i,1000000007)-pow_mod(2,n-1-i,1000000007))*a[i])%1000000007;
            res%= 1000000007;
        }
        printf("%lld\n",res);
    }
 
    return 0;
}