#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
int main()
{
    int t,i,count;
    scanf("%d",&t);
    char str[15];
    while(t--)
    {
        scanf(" %s",str);
        count=0;
        for(i=0;str[i]!='\0';i++)
        {
            if(str[i]=='4')
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}