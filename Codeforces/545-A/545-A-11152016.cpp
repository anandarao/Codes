#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n,flag[100],res = 0,i,j,temp;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        flag[i] = 1;
        for(j = 0;j <n; j++)
        {
            scanf("%d",&temp);
            if(temp == 1 || temp == 3)
                flag[i] = 0;
        }
        if(flag[i])
            res++;
    }
    printf("%d",res);
    if(res)
        printf("\n");
    for(i =0; i<n ; i++)
        if(flag[i])
            printf("%d ",i+1);
    return 0;
}