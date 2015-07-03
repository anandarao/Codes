#include<stdio.h>
int main()
{
 int n[100],i=0;
 do
   {
   scanf("%d",&n[i++]);
   }
while(n[i-1]!=42);
i=0;
   while(n[i]!=42)
    printf("%d\n",n[i++]);
 
return 0;
}