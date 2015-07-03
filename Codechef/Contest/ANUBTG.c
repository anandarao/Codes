#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void * a,const void * b)
{
    return (*(int *)b - *(int *)a );
}

int main()
{
    int t,n,a[1003],i;
    long long unsigned int res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        res=0;
        for(i=0;i<n;++i)
            scanf("%d",&a[i]);
        qsort(a,n,sizeof(int),cmpfunc);
        for(i=0;i<n;i=i+4)
        {
            if(i+1==n)
                res=res+a[i];
            else
                res=res+a[i]+a[i+1];
        }
        printf("%llu\n",res);
    }
    return 0;
}
