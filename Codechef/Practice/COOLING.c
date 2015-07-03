#include<stdio.h>
int main()
{
    int t,i,a[32],b[32],n,j,temp,count;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
 
        for(i=0;i<n-1;i++)
            for(j=0;j<n-1-i;j++)
                if(a[j]>a[j+1])
                    temp=a[j],a[j]=a[j+1],a[j+1]=temp;
        for(i=0;i<n-1;i++)
            for(j=0;j<n-1-i;j++)
                if(b[j]>b[j+1])
                    temp=b[j],b[j]=b[j+1],b[j+1]=temp;
        j=0;count=0;
        for(i=0;i<n;i++)
        {
            for(;j<n;j++)
                if(a[i]<=b[j])
                {
                    j++;
                    count++;
                    break;
                }
            if(j==n)
            {
                ;
                break;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}