#include <stdio.h>
 
long long int gcd(long long int a,long long int b)
{
    if (b == 0)
       return a;
    else
       return gcd(b, a % b);
}
 
int check(long long int a,long long int b)
{
    if(a==b)
        return 1;
    else
    {
        long long int g=gcd(a,b);
        if(g==b)
            return 1;
        else if(g==1)
            return 0;
        else
            {
                b=b/g;
                return check(g,b);
            }
    }
}
int main()
{
    int t;
    long long int a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        if(check(a,b))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}