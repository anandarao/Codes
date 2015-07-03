#include<stdio.h>
int main()
{
        int t,m,temp,x,a[200],n,i,j;
        scanf("%d",&t);
        while(t--)
        {
            m=1;
            a[0]=1;
            temp=0;
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                for(j=0;j<m;j++)
                {
                    x=a[j]*i+temp;
                    a[j]=x%10;
                    temp=x/10;
                }
                while(temp>0)
                {
                    a[m]=temp%10;
                    temp=temp/10;
                    m++;
                }
 
            }
            for(i=m-1;i>=0;i--)
                printf("%d",a[i]);
            printf("\n");
        }
        return 0;
}