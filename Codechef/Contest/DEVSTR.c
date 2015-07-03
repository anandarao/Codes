#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
 
/*int cmpfunc (const void * a, const void * b)
{
   return ( *(long long int*)a - *(long long int*)b );
}
long long int pow_mod(long long int x, long long int y, long long int z)
{
    long long int number = 1;
    while (y)
    {
        if (y & 1)
            number = number * x % z;
        y >>= 1;
        x = (long long int)x * x % z;
    }
    return number;
}*/
 
int cal(int a)
{
    if (a==1)
        return 48;
    else
        return 49;
}
int main() {
 
    int t,n,k,i,j,p,flag,res,res1,res2;
    char str[100005];
    scanf("%d",&t);
    while(t--)
    {
        res = 0;
        scanf("%d %d",&n,&k);
        scanf(" %s",str);
        if(k==1)
        {
            i = 0; j = 1;
            res1=0;res2=0;
            for(p = 0; p<n ; p++)
            {
                res1 += abs(str[p]-48-i);
                res2 += abs(str[p]-48-j);
                i = !i;
                j = !j;
            }
            if(res1<res2)
            {
                printf("%d\n",res1);
                i = 0;
            }
            else
            {
                printf("%d\n",res2);
                i = 1;
            }
            for(j=0;j<n;j++)
            {
                printf("%c",i+48);
                i=!i;
            }
            printf("\n");
        }
        else
        {
            for(i=k;i<n;i++)
            {
                flag = 1;
                for(j=i;j>=i-k;j--)
                {
                    if(str[i]!=str[j])
                    {
                        flag = 0;
                        break;
                    }
                }
                if(flag)
                {
                    if(str[i]==str[i+1] || i == n-1)
                    {
                        str[i] = cal(str[i]-48);
                        i += k;
                    }
                    else
                    {
                        str[i-k/2] = cal(str[i-k/2]-48);
                        i += k/2;
                    }
                    res++;
                }
            }
            printf("%d\n",res);
            printf("%s\n",str);
        }
 
 
    }
    return 0;
}