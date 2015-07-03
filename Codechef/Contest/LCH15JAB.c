#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int cmpfunc(const void * a,const void * b)
{
    return (*(char *)a - *(char *)b);
}
int main() {
 
    int t,maxcount,count,sum,i;
    char str[53];
    scanf("%d",&t);
    while(t--)
    {
        scanf(" %s",str);
        qsort(str,strlen(str),sizeof(char),cmpfunc);
        maxcount=0;
        sum=0;
        count=1;
        for(i=0;str[i]!='\0';++i)
        {
            if(str[i]==str[i+1])
            {
                count++;
                continue;
            }
 
            if(count>maxcount)
            {
                sum+=maxcount;
                maxcount=count;
            }
            else
            {
                sum+=count;
            }
            count=1;
        }
        if(sum==maxcount)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}