#include <algorithm>
#include <stdio.h>
#include <map>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string.h>
using namespace std;
 
 
int main()
{
    long int t;
    char ch[1000006];
    scanf("%ld",&t);
    while(t--)
    {
        long long int sum=0;
        scanf(" %s",ch);
        for(long int i=0;ch[i]!='\0';i++)
        {
            sum=sum+(ch[i]-'0');
        }
        if(sum%9==0)
        {
            printf("0\n");
        }
        else
        {
        	if(strlen(ch)==1)
        	{
        		printf("%d\n",min(sum%9,9-sum%9));
        	}
        else
        {
        	if(sum<9)
            	{	
                	printf("%d\n",(9-(sum%9)));
            	}
            	else if((sum%9)<5)
                	printf("%d\n",(sum%9));
            	else
                	printf("%d\n",(9-(sum%9)));}
        }
    	}
    
	return(0);    
}  