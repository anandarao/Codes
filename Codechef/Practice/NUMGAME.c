#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    long unsigned int n;
    scanf("%d",&t);
    while(t--)
    {
       scanf("%lu",&n);
       if(n&1)
        printf("BOB\n");
       else
        printf("ALICE\n");
    }
    return 0;
}