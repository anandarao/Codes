#include <stdio.h>
 
int main()
{
    int t,con,i;
    scanf("%d",&t);
    while(t)
    {
        con=1;
        int a[t],b[t];
        for(i=0;i<t;i++)
        {
            scanf("%d",&a[i]);
            b[a[i]-1]=i+1;
        }
        for(i=0;i<t;i++)
        {
            if(a[i]!=b[i])
            {
                con=0;
                break;
            }
        }
        if(con)
            printf("ambiguous\n");
        else
            printf("not ambiguous\n");
        scanf("%d",&t);
    }
    return 0;
}