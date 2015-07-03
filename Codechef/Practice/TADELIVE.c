#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct
{
    unsigned int a,b,dif;
}ele;
int cmpfunc (const void * a, const void * b)
{
    ele *p=(ele *)a;
    ele *q=(ele *)b;
    return ( q->dif - p->dif );
}
int main() {
 
    long unsigned int n,x,y,i,answer=0;
    scanf("%lu %lu %lu",&n,&x,&y);
    ele s[n];
    for(i=0;i<n;i++)
    {
        scanf("%u",&s[i].a);
    }
    for(i=0;i<n;i++)
    {
        scanf("%u",&s[i].b);
        s[i].dif=abs(s[i].b-s[i].a);
    }
    qsort(s,n,sizeof(ele),cmpfunc);
    for(i=0;i<n;i++)
    {
        if(s[i].a>=s[i].b)
        {
            answer+=s[i].a;
            x--;
        }
        else
        {
            answer+=s[i].b;
            y--;
        }
        if(x==0||y==0)
            break;
    }
    if(x==0)
    {
        for(++i;i<n;i++)
            answer+=s[i].b;
    }
    else if(y==0)
    {
        for(++i;i<n;i++)
            answer+=s[i].a;
    }
    printf("%lu",answer);
    return 0;
}