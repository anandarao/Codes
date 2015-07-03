#include<stdio.h>
int main()
{
 long int a,k;
 int n,i=0;
 scanf("%d%ld",&n,&k);
 while(n>0)
 {
  scanf("%ld",&a);
   if(a%k==0)
    i++;
  n--;
  }  
 printf("\n%d",i);
 return 0;
}