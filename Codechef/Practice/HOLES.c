#include<stdio.h>
int main()
{
    int t,i,count;
    scanf("%d",&t);
    while(t--)
    {
        char str[101];
        scanf(" %s",str);
        count=0;
        for(i=0;str[i]!='\0';i++)
            switch(str[i])
            {
                case 'A':
                case 'D':
                case 'O':
                case 'P':
                case 'Q':
                case 'R':count++;break;
                case 'B':count+=2;break;
            }
        printf("%d\n",count);
    }
return 0;
}