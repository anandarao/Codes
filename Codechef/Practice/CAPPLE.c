#include<stdio.h>
int main()
{
    long int t,p,i,n;
    scanf("%ld",&t);
    long int a;
    for(p=0;p<t;p++)
    {
        int count[100001]={0},x=0;
        scanf("%ld",&n);
        for(i=0;i<n;i++)
            {
                scanf("%ld",&a);
                if(count[a]==0)
                    {
                        count[a]=1;
                    }
            }
        for(i=0;i<100001;i++)
                if(count[i]==1)
                        x++;
        printf("%d\n",x);
    }
    return 0;
}