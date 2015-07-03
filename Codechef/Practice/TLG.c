#include<stdio.h>
int main()
{
    int n,a,b,l,w,max=0,p=0,q=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&a,&b);
        p=p+a;
        q=q+b;
        l=p-q;
        if(l>0)
        {
            if(l>max)
            {
                w=1;
                max=l;
            }
        }
        else
        {
            if(-l>max)
            {
                w=2;
                max=-l;
            }
        }
    }
    printf("%d %d",w,max);
    return 0;
}