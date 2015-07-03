#include<stdio.h>

int main()
{
    int t,n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%f\n",(float)(n+m-1));
    }
    return 0;
}
